#include <iostream>
#include <SFML/Graphics.hpp>

#include "GameObject.hpp"

#include "DescriptionComponent.hpp"
#include "PositionComponent.hpp"
#include "VelocityComponent.hpp"
#include "DrawableComponent.hpp"
#include "CollidableComponent.hpp"

#include "DescriptionSystem.hpp"
#include "MovementSystem.hpp"
#include "RenderSystem.hpp"
#include "CollisionSystem.hpp"

int main(int argc, char *argv[])
{
  sf::RenderWindow app(sf::VideoMode(640, 480), "ECS");
  sf::RectangleShape rectangle(sf::Vector2f(50.f, 50.f));
  rectangle.setFillColor(sf::Color::Blue);

  sf::RectangleShape rectangle2(sf::Vector2f(50.f, 50.f));
  rectangle2.setFillColor(sf::Color::Red);

  GameObject objects[2];

  DescriptionSystem desc_sys;
  MovementSystem move_sys;
  RenderSystem renderer(&app);
  CollisionSystem collision_sys;

  DescriptionComponent desc(objects[0].getId());
  PositionComponent pos(objects[0].getId()), pos2(objects[1].getId());
  VelocityComponent vel(objects[0].getId(), 1.f), vel2(objects[1].getId(), 0.2f);
  DrawableComponent drawable(objects[0].getId()), drawable2(objects[1].getId());
  CollidableComponent c1(objects[0].getId(), rectangle.getGlobalBounds()), c2(objects[1].getId(), rectangle2.getGlobalBounds());
  drawable.drawable = &rectangle;
  drawable2.drawable = &rectangle2;

  //pos.position.y = 50.f;
  pos2.position.x = 250.f;

  desc_sys.registerComponent("Description");

  move_sys.registerComponent("Position");
  move_sys.registerComponent("Velocity");

  renderer.registerComponent("Drawable");
  renderer.registerComponent("Position");

  collision_sys.registerComponent("Position");
  collision_sys.registerComponent("Collidable");

  objects[0].addComponent(&desc);
  objects[0].addComponent(&pos);
  objects[0].addComponent(&vel);
  objects[0].addComponent(&drawable);
  objects[0].addComponent(&c1);

  objects[1].addComponent(&vel2);
  objects[1].addComponent(&drawable2);
  objects[1].addComponent(&pos2);
  objects[1].addComponent(&c2);

  if (desc_sys.canUpdate(objects[0]))
    desc_sys.update(objects[0]);

  sf::Event event;
  while (app.isOpen())
    {
      while (app.pollEvent(event))
	{
	  if (event.type == sf::Event::Closed)
	    app.close();
	}

      for (int i(0) ; i < 2 ; ++i)
	if (move_sys.canUpdate(objects[i]))
	  move_sys.update(objects[i]);


      app.clear(sf::Color::White);

      for (int i(0) ; i < 2 ; ++i)
	if (collision_sys.canUpdate(objects[i]))
	  collision_sys.update(objects[i]);

      for (int i(0) ; i < 2 ; ++i)
	if (renderer.canUpdate(objects[i]))
	  renderer.update(objects[i]);

      app.display();
    }


  return 0;
}

