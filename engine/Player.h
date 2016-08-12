////////////////////
/// C++ Object-oriented Programming
/// Adventure Game 6
/// Reference answer 
/// anssi.grohn@pkamk.fi
////////////////////
#ifndef __Player_h__
#define __Player_h__
#include <string>
#include "Character.h"
class Game;
////////////////////////////////////////////////////////////////////////////////
class Player : public Character
{
private:
  Game *game;
public:
  Player();
  ~Player();
  void SetGame( Game * game );
  void Attack(Character *pObject);

  void PrintSummary();
  static void AskInfo( Player & p );
};
////////////////////////////////////////////////////////////////////////////////
#endif
