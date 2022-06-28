#ifndef COLLISIONPOINTS_HPP
#define COLLISIONPOINTS_HPP

#include <glm/glm.hpp>

struct CollisionPoints {
    glm::vec3 A;
    glm::vec3 B;
    glm::vec3 normal;
    glm::vec3 depth;
    bool has_collision;
};

#endif