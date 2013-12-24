#include "GameObject.hpp"

unsigned int GameObject::current_id(0);

GameObject::GameObject () :
  _ID(current_id++)
{}

GameObject::~GameObject ()
{}

unsigned int GameObject::getId () const
{
  return _ID;
}

bool GameObject::addComponent (Component *c)
{
  if (_components.find(c->getName()) != _components.cend())
    return false;
      
  _components[c->getName()] = c;
  return true;
}

bool GameObject::deleteComponent (const std::string & name)
{
  auto it(_components.find(name));

  if (it == _components.cend())
    return false;

  _components.erase(it);
  return true;
}
