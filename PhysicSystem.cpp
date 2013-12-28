#include "PhysicSystem.hpp"

#include "PhysicComponent.hpp"
#include "PositionComponent.hpp"

PhysicSystem::PhysicSystem (const cpVect gravity) :
  System(),
  _space(cpSpaceNew()),
  _time_step(1.f/60.f)
{
  cpSpaceSetGravity(_space, gravity);
}

PhysicSystem::~PhysicSystem ()
{
  cpSpaceFree(_space);
}

void PhysicSystem::begin ()
{
  cpSpaceStep(_space, _time_step);
}

void PhysicSystem::update (GameObject & obj)
{
  PositionComponent *pos(obj.getComponent<PositionComponent>("Position"));
  PhysicComponent *physic(obj.getComponent<PhysicComponent>("Physic"));

  cpVect new_pos(cpBodyGetPos(physic->body));
  pos->position.x = new_pos.x;
  pos->position.y = -new_pos.y;
}

cpSpace* PhysicSystem::getSpace () const
{
  return _space;
}
