#ifndef INCLUDED_COMPONENTPOSITION_HPP
#define INCLUDED_COMPONENTPOSITION_HPP

#include <SFML/System/Vector2.hpp>

#include "Component.hpp"

struct PositionComponent : public Component
{
  PositionComponent (const unsigned int entity_id, const float x = 0.f, const float y = 0.f);
  virtual ~PositionComponent ();
  
  sf::Vector2f position;
};

#endif /* INCLUDED_COMPONENTPOSITION_HPP */
