////////////////////
/// C++ Object-oriented Programming
/// Adventure Game 6
/// Reference answer 
/// anssi.grohn@pkamk.fi
///////////////////
#ifndef __Attackable_h__
#define __Attackable_h__
////////////////////////////////////////////////////////////////////////////////
class GameObject;
////////////////////////////////////////////////////////////////////////////////
struct Attacker
{
  virtual ~Attacker() {}
  //virtual void Attack( GameObject *pObject ) = 0;
};
////////////////////////////////////////////////////////////////////////////////
#endif
