#include "ComponentDescription.hpp"  

static const std::string NAME("Description");

ComponentDescription::ComponentDescription (const unsigned int entity_id) :
  Component(entity_id, std::move(NAME))
{}

ComponentDescription::~ComponentDescription ()
{}
