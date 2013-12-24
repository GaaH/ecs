#include <iostream>

#include "ComponentDescription.hpp"
#include "SystemDescription.hpp"

SystemDescription::SystemDescription (const std::string & front, const std::string & back) :
  System(),
  _front(front),
  _back(back)
{}

SystemDescription::~SystemDescription ()
{}

void SystemDescription::update (Component & c)
{
  std::cout << _front << "Component name: " << c.getName() << _back << std::endl;
}
