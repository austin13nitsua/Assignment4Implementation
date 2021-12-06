// DisplayHistory derived class
// Created by Camas, Harper, Griffin, Austin on 11/22/2021.
// CSS 343 Assignment_4 Design

#ifndef DISPLAYHISTORY_H
#define DISPLAYHISTORY_H
#include <fstream>
#include "database.h"
#include "action.h"


using namespace std;

// ----------------------------------------------------------------------------
// DisplayHistory ADT - Displays a Patron's Action history in the library
//
// Implementation and Assumptions:
//    -- Adds itself to the Patron's history when executed
//    -- Must be created in a factory
//    -- If no database is supplied the action is null
// ----------------------------------------------------------------------------

class DisplayHistory : public Action {
public:
  bool execute();
  Action* create(ifstream&);
private:
  Patron* customer;
  Database& data;
};
#endif // DISPLAYHISTORY_H
