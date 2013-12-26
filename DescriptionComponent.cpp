#include "DescriptionComponent.hpp"  

static const std::string NAME("Description");

DescriptionComponent::DescriptionComponent (const unsigned int entity_id, const std::string & front, const std::string & back) :
  Component(entity_id, NAME),
  _front(front),
  _back(back)
{}

DescriptionComponent::~DescriptionComponent ()
{}

void DescriptionComponent::setFront (const std::string & front)
{
  _front = front;
}

void DescriptionComponent::setBack (const std::string & back)
{
  _back = back;
}

std::string DescriptionComponent::getFront () const
{
  return _front;
}

std::string DescriptionComponent::getBack () const
{
  return _back;
}
