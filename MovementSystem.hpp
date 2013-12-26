#ifndef INCLUDED_SYSTEMMOVEMENT_HPP
#define INCLUDED_SYSTEMMOVEMENT_HPP

#include "System.hpp"

class MovementSystem : public System
{
public:
  MovementSystem ();
  virtual ~MovementSystem ();

  virtual void update (GameObject & obj);
};

#endif /* INCLUDED_SYSTEMMOVEMENT_HPP */
