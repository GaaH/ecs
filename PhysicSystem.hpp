#ifndef INCLUDED_PHYSICSYSTEM_HPP
#define INCLUDED_PHYSICSYSTEM_HPP

#include <chipmunk/chipmunk.h>

#include "System.hpp"

class PhysicSystem : public System
{
public:
  PhysicSystem (const cpVect gravity = cpv(0, -10));
  virtual ~PhysicSystem ();

  virtual void begin ();
  //virtual void end ();
  virtual void update (GameObject & obj);

  cpSpace* getSpace () const;

private:
  cpSpace *_space;
  cpFloat _time_step;
};

#endif /* INCLUDED_PHYSICSYSTEM_HPP */
