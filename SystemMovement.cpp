#include "SystemMovement.hpp" 
#include "ComponentPosition.hpp"
#include "ComponentVelocity.hpp"

SystemMovement::SystemMovement ()
{}

SystemMovement::~SystemMovement ()
{}

void SystemMovement::update (GameObject & obj)
{
  ComponentPosition *position(static_cast<ComponentPosition*>(obj.getComponent("Position")));
  ComponentVelocity *velocity(static_cast<ComponentVelocity*>(obj.getComponent("Velocity")));

  position->position.x += velocity->velocity.x;
  position->position.y += velocity->velocity.y;
}
