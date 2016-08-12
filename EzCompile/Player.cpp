////////////////////
/// C++ Object-oriented Programming
/// Adventure Game 6
/// Reference answer 
/// anssi.grohn@pkamk.fi
////////////////////
#include "Player.h"
#include "Game.h"
#include "IRenderer.h"
#include <cstdlib>
#include <sstream>
#include <iostream>
#include <fstream>
using namespace std;
////////////////////////////////////////////////////////////////////////////////
Player::Player()
{
  SetHitpoints(3);
}
////////////////////////////////////////////////////////////////////////////////
Player::~Player()
{
  
}
////////////////////////////////////////////////////////////////////////////////
void
Player::Attack( Character *pObject )
{
  int hp = pObject->GetHitpoints();
  if ( (rand() % 100) < 63 )
  {
    // convert this into weapon 
    // with damage property
    pObject->SetHitpoints(hp-1); 
    ostringstream s;
    s << GetName() << " hits!\n";
    game->GetRenderer()->Render( s.str() );
  }
  else
  {
    ostringstream s;
    s << GetName() << " misses!\n";
    game->GetRenderer()->Render( s.str() );
  }
}
////////////////////////////////////////////////////////////////////////////////
void 
Player::PrintSummary()
{

  cout << "Name:" << GetName() << "\n";
  cout << "Race: " <<  GetRace() << "\n";
  cout << "Class: " << GetClass() << "\n";
  cout << "age: " << GetAge() << "\n";
  cout << "gender: " << GetGender() << "\n";
  cout << "experience: " << GetExperience() << "\n";
}
////////////////////////////////////////////////////////////////////////////////
void
Player::AskInfo( Player & p)
{
  ifstream f("playerdata.txt");
  while ( !f.eof()  )
  {
    string line;
    f >> line;
    if ( line == "#player")
    {
      int iTmp;
      string strTmp;
      char g;
      f >> strTmp; p.SetName(strTmp); 
      f >> strTmp; p.SetRace(strTmp);
      f >> iTmp; p.SetClass((Class)iTmp);
      f >> iTmp; p.SetAge(iTmp);
      f >> g; p.SetGender( (g == 'm' ? Male : Female) );
      f >> iTmp; p.SetExperience(iTmp);
      
    }
  }
}
////////////////////////////////////////////////////////////////////////////////
void 
Player::SetGame( Game * game )
{ 
  this->game = game;
}
////////////////////////////////////////////////////////////////////////////////