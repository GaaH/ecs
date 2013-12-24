#include "ComponentPosition.hpp"

static const std::string NAME("Position");

ComponentPosition::ComponentPosition (const unsigned int entity_id, const float x, const float y) :
  Component(entity_id, NAME),
  position(x, y)
{}

ComponentPosition::~ComponentPosition ()
{}
