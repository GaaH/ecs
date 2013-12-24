#ifndef INCLUDED_SYSTEMDESCRIPTION_HPP
#define INCLUDED_SYSTEMDESCRIPTION_HPP

#include "System.hpp"

class SystemDescription : public System
{
public:
  SystemDescription ();
  virtual ~SystemDescription ();

  virtual void update (GameObject & obj);

private:

};

#endif /* INCLUDED_SYSTEMDESCRIPTION_HPP */
