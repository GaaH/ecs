#ifndef INCLUDED_COMPONENT_HPP
#define INCLUDED_COMPONENT_HPP

#include <string>

class Component
{
public:
  Component (const unsigned int entity_id, const std::string & name);
  virtual ~Component () = 0;

  unsigned int getEntityId () const;
  void setEntityId (const unsigned int new_entity_id);

  std::string getName () const;

  bool isUpdated () const;
  void setUpdate (bool is_updated = true);

private:
  unsigned int _entity_id;
  const std::string _name;

  bool _is_updated;
};

#endif /* INCLUDED_COMPONENT_HPP */
