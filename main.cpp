#include <iostream>

#include "GameObject.hpp"

#include "ComponentDescription.hpp"
#include "SystemDescription.hpp"

int main(int argc, char *argv[])
{
  GameObject go;
  SystemDescription desc_sys;
  ComponentDescription desc(go.getId());

  go.addComponent(&desc);
  desc_sys.update(desc);

  return 0;
}
