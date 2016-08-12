////////////////////
/// C++ Object-oriented Programming
/// Adventure Game 6
/// Reference answer 
/// anssi.grohn@pkamk.fi
////////////////////
#ifndef __GameObject_h__
#define __GameObject_h__
#include <string>
#include <cstdlib>
#include <iostream>
#include "Updateable.h"
////////////////////////////////////////////////////////////////////////////////
using std::string;
////////////////////////////////////////////////////////////////////////////////
/// Base class for all game characters.
class GameObject : public Updateable
{
private:
  string name;
  string id;
public:
  GameObject(){};
  virtual ~GameObject(){};
  void SetName( string name) {this->name = name;};
  string GetName() const{return name;};
  void Update(){};
};

#endif
