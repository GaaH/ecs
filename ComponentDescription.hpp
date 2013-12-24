#ifndef INCLUDED_COMPONENTDESCRIPTION_HPP
#define INCLUDED_COMPONENTDESCRIPTION_HPP

#include "Component.hpp"

class ComponentDescription : public Component
{
public:
  ComponentDescription (const unsigned int entity_id, const std::string & front = "[[", const std::string & back = "]]");
  ~ComponentDescription ();

  void setFront (const std::string & front);
  void setBack (const std::string & back);

  std::string getFront () const;
  std::string getBack () const;

private:
  std::string _front;
  std::string _back;
};

#endif /* INCLUDED_COMPONENTDESCRIPTION_HPP */
