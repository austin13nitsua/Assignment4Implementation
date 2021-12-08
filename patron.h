//Patron simple class
//Created by Camas, Harper, Griffin, Austin on 11/20/2021.
//CSC 343 Assignment_4 Design

#ifndef PATRON_H
#define PATRON_H

#include <iostream>
#include <string>
#include <queue>
#include <list>

//------------------------------------------------------------------------------
/**
 * Patron Class: Data for individual patrons of the library
 *  --Data is taken from a input file and processed in the database
 *  --Data is stored as a patron in the patronHashTable
 *  --The key for each patron is the patron's ID number
 *  --Class is able to track patrons current rentals and record action history
 *
 *  Implementation and Assumption:
 *      --All Patrons have a unique 4-digit ID# used for lookup
 *      --All actions taken by the patron are recorded
 *      --a Patron's checked out Entities are recorded
 *      --all relevant data to the library is accessible
 */
//------------------------------------------------------------------------------

class Action;
class Entity;

class Patron {

public:

    Patron();   //default
    ~Patron();
    void addEntity(const Entity*); //adds an entity to the checkedOut list
    bool removeEntity(const Entity*); //removes from same list (check-in)
    //records all actions taken by patron in patronHistory queue
    void addToHistory(const Action*);
    void display(); //displays patron history

private:

    int idNum = -1; //Patron's ID#, also serves as hash lookup in table
    string first; //Patron's first name
    string last; //Patron's last name
    //Queue containing patrons action history (all actions taken)
    queue<Action*> patronHistory;
    //List of checked out materials(Entity)
    list<Entity*> checkedOut;


protected:


};

#endif //PATRON_H
