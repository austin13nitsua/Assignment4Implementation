// CheckIn derived class
// Created by Camas, Harper, Griffin, Austin on 11/22/2021.
// CSS 343 Assignment_4 Design

#ifndef CHECKIN_H
#define CHECKIN_H
#include <fstream>
#include "database.h"
#include "action.h"


using namespace std;

// ----------------------------------------------------------------------------
// CheckIn ADT - Checks back into the library an Entity a Patron has checked out
//    --
//
// Implementation and Assumptions:
//    -- Adds itself to the Patron's history when executed
//    -- Removes the Entity from the Patron's checkOut when executed
//    -- Decrements the Entity's copiesAvailable
//    -- Must be created in a factory
//    -- If no database is supplied the action is null
// ----------------------------------------------------------------------------

class CheckIn : public Action {
public:
  bool execute();
  Action* create(ifstream&);
private:
  Patron* customer;
  Entity* entity;
  Database& data;
};

#endif // CHECKIN_H
