////////////////////
/// C++ Object-oriented Programming
/// Adventure Game 6
/// Reference answer 
/// anssi.grohn@pkamk.fi
#ifndef __Enemy_h__
#define __Enemy_h__
#include "Character.h"
#include <iostream>
#include <cstdlib>
const int ENEMY_DEFAULT_HITPOINTS = 3;

using namespace std;
class Enemy : public Character
{
public:
  void Attack( Character *pObject );
  Enemy() 
  {
	  SetHitpoints(ENEMY_DEFAULT_HITPOINTS);
  }
  
  bool IsAlive() const { return GetHitpoints() > 0; }
};

#endif
