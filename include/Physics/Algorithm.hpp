#ifndef ALGORITHM_HPP
#define ALGORITHM_HPP

#include "Physics/CollisionPoints.hpp"
#include "Physics/SphereCollider.hpp"
#include "Physics/PlaneCollider.hpp"

namespace algo {
    CollisionPoints FindSphereSphereCollisionPoints(
        const SphereCollider* a, const Transform* ta,
        const SphereCollider* b, const Transform* tb
    );

    CollisionPoints FindSpherePlaneCollisionPoints(
        const SphereCollider* a, const Transform* ta,
        const PlaneCollider* b, const Transform* tb
    );
}

#endif