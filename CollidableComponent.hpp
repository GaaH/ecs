#ifndef INCLUDED_COLLIDECOMPONENT_HPP
#define INCLUDED_COLLIDECOMPONENT_HPP

#include <SFML/Graphics/Rect.hpp>

#include "Component.hpp"

struct CollidableComponent : public Component
{
  CollidableComponent (const unsigned int entity_id, const sf::FloatRect & rect = sf::FloatRect());
  virtual ~CollidableComponent ();

  sf::FloatRect bbox;
};

#endif /* INCLUDED_COLLIDECOMPONENT_HPP */
