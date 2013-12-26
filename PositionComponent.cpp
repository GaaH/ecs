#include "PositionComponent.hpp"

static const std::string NAME("Position");

PositionComponent::PositionComponent (const unsigned int entity_id, const float x, const float y) :
  Component(entity_id, NAME),
  position(x, y)
{}

PositionComponent::~PositionComponent ()
{}
