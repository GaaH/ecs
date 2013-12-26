#ifndef INCLUDED_COMPONENTVELOCITY_HPP
#define INCLUDED_COMPONENTVELOCITY_HPP

#include <SFML/System/Vector2.hpp>

#include "Component.hpp"

struct VelocityComponent : public Component
{
  VelocityComponent (const unsigned int entity_id, const float vel_x = 0.f, const float vel_y = 0.f);
  virtual ~VelocityComponent ();

  sf::Vector2f velocity;
};

#endif /* INCLUDED_COMPONENTVELOCITY_HPP */
