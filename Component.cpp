#include "Component.hpp"

Component::Component (const unsigned int entity_id, const std::string & name) :
  _entity_id(entity_id),
  _name(name),
  _is_updated(false)
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

bool Component::isUpdated () const
{
  return _is_updated;
}

void Component::setUpdate (bool isUpdated)
{
  _is_updated = isUpdated;
}
