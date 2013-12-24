#include "ComponentVelocity.hpp"

static const std::string NAME("Velocity");

ComponentVelocity::ComponentVelocity (const unsigned int entity_id, const float vel_x, const float vel_y) :
  Component(entity_id, NAME),
  velocity(vel_x, vel_y)
{}

ComponentVelocity::~ComponentVelocity ()
{}
