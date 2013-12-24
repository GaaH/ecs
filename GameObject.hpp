#ifndef INCLUDED_GAMEOBJECT_HPP
#define INCLUDED_GAMEOBJECT_HPP

#include <unordered_map>

#include "Component.hpp"

class GameObject
{
public:
  GameObject ();
  ~GameObject ();

  unsigned int getId () const;

  bool addComponent (Component *c);
  bool deleteComponent (const std::string & name);
  Component* getComponent (const std::string & name);

private:
  static unsigned int current_id;
  const unsigned int _ID;

  std::unordered_map<std::string, Component*> _components;
};

#endif /* INCLUDED_GAMEOBJECT_HPP */
