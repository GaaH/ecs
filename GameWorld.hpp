#ifndef INCLUDED_GAMEWORLD_HPP
#define INCLUDED_GAMEWORLD_HPP

#include <list>
#include <memory>

#include <SFML/Graphics/RenderWindow.hpp>

#include "System.hpp"
#include "GameObject.hpp"

class GameWorld
{
public:
  GameWorld ();
  ~GameWorld ();

  void update ();
  GameObject* addObject ();

private:
  void initSystems ();

  sf::RenderWindow _window;
  std::list<std::unique_ptr<System>> _systems;
  std::list<std::unique_ptr<GameObject>> _entities;
};

#endif /* INCLUDED_GAMEWORLD_HPP */
