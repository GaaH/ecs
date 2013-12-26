#include "CollisionSystem.hpp"
#include "VelocityComponent.hpp"
#include "CollidableComponent.hpp"
#include "PositionComponent.hpp"

CollisionSystem::CollisionSystem () : 
  System()
{}

CollisionSystem::~CollisionSystem ()
{}

void CollisionSystem::update (GameObject & obj)
{
  CollidableComponent *current_bbox(static_cast<CollidableComponent*>(obj.getComponent("Collidable")));
  PositionComponent *current_pos(static_cast<PositionComponent*>(obj.getComponent("Position")));
  
  current_bbox->bbox.left = current_pos->position.x;
  current_bbox->bbox.top = current_pos->position.y;

  for (GameObject *o : _collidables)
    {
      if (o != &obj)
	{
	  CollidableComponent *bbox(static_cast<CollidableComponent*>(o->getComponent("Collidable")));

	  if (bbox)
	    {
	      PositionComponent *pos(static_cast<PositionComponent*>(o->getComponent("Position")));
	      bbox->bbox.left = pos->position.x;
	      bbox->bbox.top = pos->position.y;

	      if (current_bbox->bbox.intersects(bbox->bbox))
		{
		  VelocityComponent *vel1(static_cast<VelocityComponent*>(obj.getComponent("Velocity")));
		  VelocityComponent *vel2(static_cast<VelocityComponent*>(o->getComponent("Velocity")));

		  if (vel1 && vel2)
		    {
		      float vel_x = std::min(vel1->velocity.x, vel2->velocity.x);
		      float vel_y = std::min(vel1->velocity.y, vel2->velocity.y);

		      vel1->velocity.x = vel1->velocity.x = vel_x;
		      vel1->velocity.y = vel1->velocity.y = vel_y;
		    }
		  else
		    {
		      if (vel1)
			{
			  vel1->velocity.x = 0.f;
			  vel1->velocity.y = 0.f;
			}

		      if (vel2)
			{
			  vel2->velocity.x = 0.f;
			  vel2->velocity.y = 0.f;
			}
		    }
		}
	    }

	  else
	    _collidables.erase(o);
	}
    }

  _collidables.insert(&obj);
}
