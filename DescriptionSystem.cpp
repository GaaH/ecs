#include <iostream>

#include "GameObject.hpp"
#include "DescriptionComponent.hpp"
#include "DescriptionSystem.hpp"

DescriptionSystem::DescriptionSystem () :
  System()
{}

DescriptionSystem::~DescriptionSystem ()
{}

void DescriptionSystem::update (GameObject & obj)
{
  std::list<std::string> component_list(obj.getComponentList());
  DescriptionComponent *description(static_cast<DescriptionComponent*>(obj.getComponent("Description")));

  std::cout << description->getFront() << std::endl;
  for (std::string component_name : component_list)
    {
      Component *component(obj.getComponent(component_name));
      std::cout << component->getName() << std::endl;
    }
  std::cout << description->getBack() << std::endl;;
}
