#include "PhysicComponent.hpp"

static const std::string NAME("Physic");

PhysicComponent::PhysicComponent (const unsigned int entity_id, const cpFloat mass, const cpFloat moment) :
  Component(entity_id, NAME),
  body(cpBodyNew(mass, moment)),
  shape(nullptr)
{}

PhysicComponent::~PhysicComponent ()
{
  cpBodyFree(body);
  cpShapeFree(shape);
}
