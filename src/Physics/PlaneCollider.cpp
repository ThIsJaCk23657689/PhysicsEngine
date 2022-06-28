#include "Physics/PlaneCollider.hpp"

CollisionPoints PlaneCollider::TestCollision(const Transform* transform, const Collider* collider, const Transform* collider_transform) const {
    return collider->TestCollision(collider_transform, this, transform);
}

CollisionPoints PlaneCollider::TestCollision(const Transform* transform, const SphereCollider* sphere, const Transform* sphere_transform) const {
    return sphere->TestCollision(sphere_transform, this, transform);
}

CollisionPoints PlaneCollider::TestCollision(const Transform* transform, const PlaneCollider* plane, const Transform* plane_transform) const {
    // No plane vs plane
    return {};
}