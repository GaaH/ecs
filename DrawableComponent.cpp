#include "DrawableComponent.hpp" 

static const std::string NAME("Drawable");

DrawableComponent::DrawableComponent (const unsigned int entity_id) :
  Component(entity_id, NAME)
{}

DrawableComponent::~DrawableComponent ()
{}
