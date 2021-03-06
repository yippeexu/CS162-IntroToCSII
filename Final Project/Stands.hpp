/**********************************
* Author: Kyle De Laurell
* Date: 3/9/16
* Description: Stands header file
**********************************/

#ifndef Stands_HPP
#define Stands_HPP
#include "Spaces.hpp"
#include "LockerRoom.hpp"
#include "Closet.hpp"
#include "Bathroom.hpp"
#include "PenaltyBox.hpp"
#include "Bench.hpp"
#include "IceRink.hpp"
#include "Stands.hpp"
#include "PressBox.hpp"
#include "ArenaArea.hpp"
#include "FrontDoor.hpp"
#include "Lobby.hpp"
#include <string>
using std::string;

class Stands : public Spaces{
private:
  Spaces* cR1;
  Spaces* cR2;
  Spaces* cR3;
  Spaces* cR4;
  Spaces* cR5;
  Spaces* cR6;
  Spaces* cR7;
  string roomName;
  string roomMonster;
  string roomItem;

public:
  Stands(string, string, string);
  ~Stands();
  virtual int enterRoom();
  virtual void DisplayRoomOptions();
  virtual void DisplayItemOptions();
  virtual Spaces* getNewLocation(int);
  virtual void setConnectedRooms(Spaces*, Spaces*, Spaces*, Spaces*, Spaces*, Spaces*, Spaces*);
  virtual int getNumConnectedRooms();
  virtual string getName();
  virtual string getRoomItem();
  virtual void addItem(string);
  virtual int monsterAttack(string);
  virtual bool hasItem();
  virtual int intiateSpecial();
};

#endif
