#include "RenderSystem.hpp"
#include "DrawableComponent.hpp"
#include "PositionComponent.hpp"

RenderSystem::RenderSystem (sf::RenderTarget *target) : 
  System(),
  _target(target)
{}

RenderSystem::~RenderSystem ()
{}

void RenderSystem::update (GameObject & obj) 
{
  //DrawableComponent *drawable(static_cast<DrawableComponent*>(obj.getComponent("Drawable")));
  DrawableComponent *drawable(obj.getComponent<DrawableComponent>("Drawable"));
  PositionComponent *position(static_cast<PositionComponent*>(obj.getComponent("Position")));

  sf::Transform tr;
  tr.translate(position->position);

  _target->draw(*drawable->drawable, tr);
}
