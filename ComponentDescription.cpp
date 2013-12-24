#include "ComponentDescription.hpp"  

static const std::string NAME("Description");

ComponentDescription::ComponentDescription (const unsigned int entity_id, const std::string & front, const std::string & back) :
  Component(entity_id, NAME),
  _front(front),
  _back(back)
{}

ComponentDescription::~ComponentDescription ()
{}

void ComponentDescription::setFront (const std::string & front)
{
  _front = front;
}

void ComponentDescription::setBack (const std::string & back)
{
  _back = back;
}

std::string ComponentDescription::getFront () const
{
  return _front;
}

std::string ComponentDescription::getBack () const
{
  return _back;
}
