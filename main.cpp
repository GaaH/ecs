#include <iostream>

#include "GameObject.hpp"

#include "ComponentDescription.hpp"
#include "ComponentPosition.hpp"
#include "ComponentVelocity.hpp"

#include "SystemDescription.hpp"
#include "SystemMovement.hpp"

int main(int argc, char *argv[])
{
  GameObject go;
  SystemDescription desc_sys;
  SystemMovement move_sys;
  ComponentDescription desc(go.getId());
  ComponentPosition pos(go.getId());
  ComponentVelocity vel(go.getId(), 1.f);

  desc_sys.registerComponent("Description");
  move_sys.registerComponent("Position");
  move_sys.registerComponent("Velocity");

  go.addComponent(&desc);
  go.addComponent(&pos);
  go.addComponent(&vel);

  if (desc_sys.canUpdate(go))
    desc_sys.update(go);

  while (pos.position.x < 11.f)
    {
      if (move_sys.canUpdate(go))
	move_sys.update(go);

      std::cout << pos.position.x << std::endl;
    }


  return 0;
}

