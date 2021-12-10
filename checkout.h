// CheckOut derived class
// Created by Camas, Harper, Griffin, Austin on 11/22/2021.
// CSS 343 Assignment_4 Design

#ifndef CHECKOUT_H
#define CHECKOUT_H
#include <fstream>
#include "database.h"
#include "action.h"

// ----------------------------------------------------------------------------
// CheckOut ADT - Checks out an Entity to a Patron of the library
//
// Implementation and Assumptions:
//    -- Adds itself to the Patron's history when executed
//    -- Adds the Entity to the Patron's checkOut when executed
//    -- Decrements the Entity's copiesAvailable when executed
//    -- Must be created in a factory
//    -- If no database is supplied the action is null
// ----------------------------------------------------------------------------

class CheckOut : public Action {
public:
    CheckOut();
    bool execute();
    Action* create(ifstream&);
    void display();
    string getType();
private:
    Patron* customer;
    Entity* entity;
};

#endif // CHECKOUT_H
