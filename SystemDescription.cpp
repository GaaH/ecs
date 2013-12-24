#include <iostream>

#include "GameObject.hpp"
#include "ComponentDescription.hpp"
#include "SystemDescription.hpp"

SystemDescription::SystemDescription () :
  System()
{}

SystemDescription::~SystemDescription ()
{}

void SystemDescription::update (GameObject & obj)
{
  std::list<std::string> component_list(obj.getComponentList());
  ComponentDescription *description(static_cast<ComponentDescription*>(obj.getComponent("Description")));

  std::cout << description->getFront() << std::endl;
  for (std::string component_name : component_list)
    {
      Component *component(obj.getComponent(component_name));
      std::cout << component->getName() << std::endl;
    }
  std::cout << description->getBack() << std::endl;;
}
