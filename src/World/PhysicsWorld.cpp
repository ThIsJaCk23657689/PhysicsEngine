#include "World/PhysicsWorld.hpp"

#include <algorithm>
#include "Physics/Collision.hpp"

void PhysicsWorld::AddEntity(Entity *entity) {
    m_entities.push_back(entity);
}

void PhysicsWorld::RemoveEntity(Entity *entity) {
    auto it = std::remove(m_entities.begin(), m_entities.end(), entity);
    m_entities.erase(it, m_entities.end());
}

void PhysicsWorld::ClearEntity() {
    m_entities.clear();
}

void PhysicsWorld::Step(const float &dt) {

    ResolveCollision(dt);

    for (Entity* entity : m_entities) {
        entity->force += entity->mass * m_gravity;

        entity->velocity += entity->force / entity->mass * dt;
        entity->position += entity->velocity * dt;

        entity->force = {0, 0, 0};
    }
}

void PhysicsWorld::ResolveCollision(const float& dt) {
    std::vector<Collision> collisions;
    for (Entity* a : m_entities) {
        for (Entity* b : m_entities) {
            if (a == b) break;

            if (!a->collider || !b->collider) {
                continue;
            }

            CollisionPoints points = a->collider->TestCollision(
                a->transform,
                b->collider,
                a->transform
            );

            if (points.has_collision) {
                // collisions.emplace_back(a, b, points);
            }
        }
    }
}