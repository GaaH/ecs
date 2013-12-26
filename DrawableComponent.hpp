#ifndef INCLUDED_DRAWABLECOMPONENT_HPP
#define INCLUDED_DRAWABLECOMPONENT_HPP

#include <SFML/Graphics/Drawable.hpp>

#include "Component.hpp"

struct DrawableComponent : public Component
{
  DrawableComponent (const unsigned int entity_id);
  virtual ~DrawableComponent ();

  sf::Drawable *drawable;
};

#endif /* INCLUDED_DRAWABLECOMPONENT_HPP */
