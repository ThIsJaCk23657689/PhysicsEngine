#ifndef PLANECOLLIDER_HPP
#define PLANECOLLIDER_HPP

#include "Physics/Collider.hpp"

struct Collider;

struct PlaneCollider : Collider {
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