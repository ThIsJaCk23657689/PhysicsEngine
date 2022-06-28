#ifndef SPHERECOLLIDER_HPP
#define SPHERECOLLIDER_HPP

#include <glm/glm.hpp>
#include "Physics/Collider.hpp"

struct Collider;

struct SphereCollider : Collider {
    glm::vec3 center;
    float radius;

    CollisionPoints TestCollision(
        const Transform* transform,
        const Collider* collider,
        const Transform* collider_transform) const override;

    CollisionPoints TestCollision(
        const Transform* transform,
        const SphereCollider* sphere,
        const Transform* sphere_transform) const override;

    CollisionPoints TestCollision(
        const Transform* transform,
        const PlaneCollider* plane,
        const Transform* plane_transform) const override;
};

#endif