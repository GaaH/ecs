#ifndef INCLUDED_SYSTEM_HPP
#define INCLUDED_SYSTEM_HPP

class Component;

class System
{
public:
  System ();
  virtual ~System ();

  virtual void update (Component & c) = 0;

private:

};

#endif /* INCLUDED_SYSTEM_HPP */
