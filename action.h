// Action base class
// Created by Camas, Harper, Griffin, Austin on 11/22/2021.
// CSS 343 Assignment_4 Design

#ifndef ACTION_H
#define ACTION_H
#include <fstream>
#include "database.h"


// ----------------------------------------------------------------------------
// Action ADT - An action which may be executed in a database.
//
// Implementation and Assumptions:
//    -- Must be created in a factory
//    -- If no database is supplied the action is null
// ----------------------------------------------------------------------------

class Action {
public:
  Action(Database* = nullptr);
  virtual bool execute() = 0;
  virtual Action* create(ifstream&) = 0;
private:
  Database* data;
};

#endif // ACTION_H
