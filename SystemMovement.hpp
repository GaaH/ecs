#ifndef INCLUDED_SYSTEMMOVEMENT_HPP
#define INCLUDED_SYSTEMMOVEMENT_HPP

#include "System.hpp"

class SystemMovement : public System
{
public:
  SystemMovement ();
  virtual ~SystemMovement ();

  virtual void update (GameObject & obj);
};

#endif /* INCLUDED_SYSTEMMOVEMENT_HPP */
