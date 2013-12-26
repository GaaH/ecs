#include <iostream>

#include "GameObject.hpp"

#include "DescriptionComponent.hpp"
#include "PositionComponent.hpp"
#include "VelocityComponent.hpp"

#include "DescriptionSystem.hpp"
#include "MovementSystem.hpp"

int main(int argc, char *argv[])
{
  GameObject go;
  DescriptionSystem desc_sys;
  MovementSystem move_sys;
  DescriptionComponent desc(go.getId());
  PositionComponent pos(go.getId());
  VelocityComponent vel(go.getId(), 1.f);

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

