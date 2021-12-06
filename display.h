// Display derived class
// Created by Camas, Harper, Griffin, Austin on 11/22/2021.
// CSS 343 Assignment_4 Design

#ifndef DISPLAY_H
#define DISPLAY_H
#include <fstream>
#include "database.h"
#include "action.h"


// ----------------------------------------------------------------------------
// Display ADT - Displays the contents of a library
//    -- Prints every Entity in the library by category when executed
//
// Implementation and Assumptions:
//    -- Must be created in a factory
//    -- If no database is supplied the action is null
// ----------------------------------------------------------------------------

class Display : public Action {
public:
  bool execute();
  Action* create(ifstream&);
private:
  Database& data;
};

#endif // DISPLAY_H
