#include <iostream>

#include "GameWorld.hpp"

#include "DescriptionSystem.hpp"
#include "MovementSystem.hpp"
#include "RenderSystem.hpp"

GameWorld::GameWorld () : _window(sf::VideoMode(640, 480), "ECS")
{
  initSystems();
}

GameWorld::~GameWorld ()
{}

void GameWorld::update ()
{
  _window.clear(sf::Color::White);

  for (auto system(_systems.begin()) ; system != _systems.end() ; ++system)
    {
      (*system)->begin();
      for (auto entity(_entities.begin()) ; entity != _entities.end() ; ++entity)
	{
	  if ((*system)->canUpdate(**entity))
	    {
	      (*system)->update(**entity);
	    }
	}
      (*system)->end();
    }

  _window.display();
}

GameObject* GameWorld::addObject ()
{
  _entities.emplace_back(new GameObject);
  return _entities.back().get();
}

void GameWorld::initSystems ()
{
  /*
  _systems.emplace_back(new MovementSystem);
  _systems.back()->registerComponent("Velocity");
  _systems.back()->registerComponent("Position");
  */
  //_systems.emplace_back(new DescriptionSystem);

  _systems.emplace_back(new RenderSystem(&_window));
  _systems.back()->registerComponent("Drawable");
  _systems.back()->registerComponent("Position");
}
