#ifndef __Character_h__
#define __Character_h__

#include "GameObject.h"
#include "Attacker.h"

using std::string;
enum Gender { Male, Female };
enum Class { Barbarian, Wizard, Paladin, Priest };

class Character : public GameObject, public Attacker
{
private:
  string race;
  Class myClass;
  unsigned short int age;
  Gender gender;
  int experience;

  int hitpoints;
public:
  Character();
  virtual ~Character();

  int GetHitpoints() const;
  void SetHitpoints(int hp );

  void SetClass( Class c);
  Class GetClass() const;

  void SetAge( unsigned short int age );
  unsigned short int GetAge() const;
  
  void SetGender( Gender g );
  Gender GetGender() const;
  
  void SetRace( string r );
  string GetRace() const;
  
  void SetExperience( int experience );
  int GetExperience() const;

  virtual void Attack( Character *pObject );
};


#endif