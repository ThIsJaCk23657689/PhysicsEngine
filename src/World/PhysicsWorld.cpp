#include "World/PhysicsWorld.hpp"
#include <algorithm>

void PhysicsWorld::AddEntity(Entity *entity) {
    m_entities.push_back(entity);
}

void PhysicsWorld::RemoveEntity(Entity *entity) {
    auto it = std::remove(m_entities.begin(), m_entities.end(), entity);
    m_entities.erase(it, m_entities.end());
}

void PhysicsWorld::Step(const float &dt) {
    for (Entity* entity : m_entities) {
        entity->force += entity->mass * m_gravity;

        entity->velocity += entity->force / entity->mass * dt;
        entity->position += entity->velocity * dt;

        entity->force = {0, 0, 0};
    }
}