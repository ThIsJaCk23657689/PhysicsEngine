#ifndef TRANSFORM_HPP
#define TRANSFORM_HPP

#include <glm/glm.hpp>
#include <glm/gtc/quaternion.hpp>

struct Transform {
    glm::vec3 position;
    glm::vec3 scale;
    glm::quat rotation;
};

#endif