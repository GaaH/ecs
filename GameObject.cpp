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

Component* GameObject::getComponent (const std::string & name)
{  
  auto it(_components.find(name));
  return it == _components.cend() ? nullptr : it->second;
}

std::list<std::string> GameObject::getComponentList () const
{
  std::list<std::string> res;
  for (auto e : _components)
    res.push_back(e.first);

  return res;
}
