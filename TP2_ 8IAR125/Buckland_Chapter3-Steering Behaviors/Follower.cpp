#include "Follower.h"
#include "SteeringBehaviors.h"

Follower::Follower(GameWorld* world,
    Vector2D position,
    double    rotation,
    Vector2D velocity,
    double    mass,
    double    max_force,
    double    max_speed,
    double    max_turn_rate,
    double    scale,
    Vehicle *target) : Vehicle(world,
                              position,
                              rotation,
                              velocity,
                              mass,
                              max_force,
                              max_speed,
                              max_turn_rate,
                              scale) {

    this->Steering()->OffsetPursuitOn(target, Vector2D(-30,0));
    this->SetScale(Vector2D(5, 5));
    this->SetMaxSpeed(70);
}

Follower::~Follower() {
}