#ifndef INCLUDED_SYSTEMDESCRIPTION_HPP
#define INCLUDED_SYSTEMDESCRIPTION_HPP

#include "System.hpp"

class DescriptionSystem : public System
{
public:
  DescriptionSystem ();
  virtual ~DescriptionSystem ();

  virtual void update (GameObject & obj);

private:

};

#endif /* INCLUDED_SYSTEMDESCRIPTION_HPP */
