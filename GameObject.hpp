#ifndef INCLUDED_GAMEOBJECT_HPP
#define INCLUDED_GAMEOBJECT_HPP

#include <list>
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

  template <typename T>
  T* getComponent (const std::string & name)
  {  
    auto it(_components.find(name));
    return static_cast<T*>(it == _components.cend() ? nullptr : it->second);
  }

  std::list<std::string> getComponentList () const;

private:
  static unsigned int current_id;
  const unsigned int _ID;

  std::unordered_map<std::string, Component*> _components;
};

#endif /* INCLUDED_GAMEOBJECT_HPP */
