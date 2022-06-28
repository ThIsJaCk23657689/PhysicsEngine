#ifndef COLLIDER_HPP
#define COLLIDER_HPP

#include "Physics/CollisionPoints.hpp"
#include "Physics/Transform.hpp"
#include "Physics/SphereCollider.hpp"
#include "Physics/PlaneCollider.hpp"

struct SphereCollider;
struct PlaneCollider;

struct Collider {
    virtual CollisionPoints TestCollision(
        const Transform* transform,
        const Collider* collider,
        const Transform* collider_transform) const = 0;

    virtual CollisionPoints TestCollision(
        const Transform* transform,
        const SphereCollider* sphere,
        const Transform* sphere_transform) const = 0;

    virtual CollisionPoints TestCollision(
        const Transform* transform,
        const PlaneCollider* plane,
        const Transform* plane_transform) const = 0;
};

#endif