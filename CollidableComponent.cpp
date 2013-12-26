#include "CollidableComponent.hpp"

static const std::string NAME("Collidable");

CollidableComponent::CollidableComponent (const unsigned int entity_id, const sf::FloatRect & rect) :
  Component(entity_id, NAME),
  bbox(rect)
{}

CollidableComponent::~CollidableComponent ()
{}
