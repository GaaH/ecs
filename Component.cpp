#include "Component.hpp"

Component::Component (const unsigned int entity_id, const std::string && name) :
  _entity_id(entity_id),
  _name(std::move(name)),
  _has_changed(false)
 {}

Component::~Component ()
{}

unsigned int Component::getEntityId () const
{
  return _entity_id;
}

void Component::setEntityId (const unsigned int new_entity_id)
{
  _entity_id = new_entity_id;
}

std::string Component::getName () const
{
  return _name;
}
