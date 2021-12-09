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
    // Constructor, sets pointer to database (nullptr if none provided)
    Action(Database* = nullptr);
    // Virtual Destructor
    virtual ~Action();
    virtual bool execute() = 0;
    virtual Action* create(ifstream&) = 0;
    virtual void display() = 0;
    virtual string getType() = 0;
protected:
    Database* data;
};

#endif // ACTION_H
