#ifndef INCLUDED_COLLISIONSYSTEM_HPP
#define INCLUDED_COLLISIONSYSTEM_HPP

#include <unordered_set>

#include "System.hpp"

class CollisionSystem : public System
{
public:
  CollisionSystem ();
  virtual ~CollisionSystem ();

  virtual void update (GameObject & obj);

private:
  std::unordered_set<GameObject*> _collidables;
};

#endif /* INCLUDED_COLLISIONSYSTEM_HPP */
