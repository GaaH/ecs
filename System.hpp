#ifndef INCLUDED_SYSTEM_HPP
#define INCLUDED_SYSTEM_HPP

#include <set>
#include <string>

class GameObject;

class System
{
public:
  System ();
  virtual ~System ();

  virtual void update (GameObject & obj) = 0;

  bool canUpdate (GameObject & obj) const;
  void registerComponent (const std::string & name);

private:
  std::set<std::string> _registered_components;
};

#endif /* INCLUDED_SYSTEM_HPP */
