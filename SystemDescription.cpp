#include <iostream>

#include "GameObject.hpp"
#include "ComponentDescription.hpp"
#include "SystemDescription.hpp"

SystemDescription::SystemDescription (const std::string & front, const std::string & back) :
  System(),
  _front(front),
  _back(back)
{}

SystemDescription::~SystemDescription ()
{}

void SystemDescription::update (GameObject & obj)
{
  ComponentDescription *c(reinterpret_cast<ComponentDescription*>(obj.getComponent("Description")));
  std::cout << _front << "Component name: " << c->getName() << _back << std::endl;
}
