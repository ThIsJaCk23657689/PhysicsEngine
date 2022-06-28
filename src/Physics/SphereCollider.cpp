#include "Physics/SphereCollider.hpp"
#include "Physics/Algorithm.hpp"

CollisionPoints SphereCollider::TestCollision(const Transform* transform, const Collider* collider, const Transform* collider_transform) const {
    return collider->TestCollision(collider_transform, this, transform);

}

CollisionPoints SphereCollider::TestCollision(const Transform* transform, const SphereCollider* sphere, const Transform* sphere_transform) const {
    return algo::FindSphereSphereCollisionPoints(
        this, transform, sphere, sphere_transform
    );

}

CollisionPoints SphereCollider::TestCollision(const Transform* transform, const PlaneCollider* plane, const Transform* plane_transform) const {
    return algo::FindSpherePlaneCollisionPoints(
        this, transform, plane, plane_transform
    );
}