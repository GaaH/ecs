#include "MovementSystem.hpp" 
#include "PositionComponent.hpp"
#include "VelocityComponent.hpp"

MovementSystem::MovementSystem ()
{}

MovementSystem::~MovementSystem ()
{}

void MovementSystem::update (GameObject & obj)
{
  PositionComponent *position(static_cast<PositionComponent*>(obj.getComponent("Position")));
  VelocityComponent *velocity(static_cast<VelocityComponent*>(obj.getComponent("Velocity")));

  position->position.x += velocity->velocity.x;
  position->position.y += velocity->velocity.y;
}
