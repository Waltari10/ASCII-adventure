#include "Enemy.h"
////////////////////////////////////////////////////////////////////////////////
void
Enemy::Attack( Character *pObject )
{
  int hp = pObject->GetHitpoints();
  if ( (rand() % 10) < 6 )
  {
    // TODO: convert this into weapon 
    // with damage property. Can you do it? Is so, explain in your learning diary how.
    pObject->SetHitpoints(hp-1); 
    cout << GetName() << " hits!\n";
  }
  else
    cout << GetName() << " misses!\n";
}
////////////////////////////////////////////////////////////////////////////////