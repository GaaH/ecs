#ifndef INCLUDED_PHYSICCOMPONENT_HPP
#define INCLUDED_PHYSICCOMPONENT_HPP

#include <chipmunk/chipmunk.h>

#include "Component.hpp"

struct PhysicComponent : public Component
{
  PhysicComponent (const unsigned int entity_id, const cpFloat mass, const cpFloat moment);
  virtual ~PhysicComponent ();

  cpBody *body;
  cpShape *shape;
};

#endif /* INCLUDED_PHYSICCOMPONENT_HPP */
