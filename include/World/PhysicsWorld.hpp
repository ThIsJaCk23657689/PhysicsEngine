#ifndef PHYSICSWORLD_HPP
#define PHYSICSWORLD_HPP

#include <glm/glm.hpp>
#include <vector>
#include "World/Entity.hpp"

struct PhysicsWorld {
public:
    PhysicsWorld() = default;

    void AddEntity(Entity* entity);
    void RemoveEntity(Entity* entity);
    void Step(const float& dt);

private:
    std::vector<Entity*> m_entities;
    glm::vec3 m_gravity = {0.0f, -9.81f, 0.0,};

};

#endif