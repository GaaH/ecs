#ifndef INCLUDED_RENDERSYSTEM_HPP
#define INCLUDED_RENDERSYSTEM_HPP

#include <SFML/Graphics/RenderTarget.hpp>

#include "System.hpp"

class RenderSystem : public System
{
public:
  RenderSystem (sf::RenderTarget *target);
  virtual ~RenderSystem ();

  virtual void update (GameObject & obj);

private:
  sf::RenderTarget *_target;
};


#endif /* INCLUDED_RENDERSYSTEM_HPP */
