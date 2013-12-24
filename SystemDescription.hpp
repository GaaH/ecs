#ifndef INCLUDED_SYSTEMDESCRIPTION_HPP
#define INCLUDED_SYSTEMDESCRIPTION_HPP

#include "System.hpp"

class SystemDescription : public System
{
public:
  SystemDescription (const std::string & front = "[[", const std::string & back = "]]");
  virtual ~SystemDescription ();

  virtual void update (GameObject & obj);

private:
  std::string _front, _back;
};

#endif /* INCLUDED_SYSTEMDESCRIPTION_HPP */
