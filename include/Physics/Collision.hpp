#ifndef COLLISION_HPP
#define COLLISION_HPP

#include "World/Entity.hpp"
#include "Physics/CollisionPoints.hpp"

struct Collision {
    Entity* obj_a;
    Entity* obj_b;
    CollisionPoints points;
};

#endif