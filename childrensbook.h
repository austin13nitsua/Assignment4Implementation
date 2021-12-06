// ChildrensBook derived class
// Created by Camas, Harper, Griffin, Austin on 11/22/2021.
// CSS 343 Assignment_4 Design

#ifndef CHILDRENSBOOK_H
#define CHILDRENSBOOK_H

#include "entity.h"
#include <string>

using namespace std;

//-----------------------------------------------------------------------------
//
// ChildrensBook class: a type of Entity which is a story book for children
// 
// Implementation and assumptions:
//  -- derived from Entity class so inherits Entity's members and methods
//     and implements these
//  -- additionally has data members for the book's author and title
//-----------------------------------------------------------------------------

class ChildrensBook : public Entity {
public:
    // Constructor
    ChildrensBook();
    // Creates from input file
    Entity* create(ifstream&);
    // Returns author member;
    string getAuthor();
    // Returns title member
    string getTitle();
    // > operator for comparison with other ChildrensBook objects
    bool operator>(const Entity&) const;
    // < operator for comparison with other ChildrensBook objects
    bool operator<(const Entity&) const;
    // >= operator for comparison with other ChildrensBook objects
    bool operator>=(const Entity&) const;
    // <= operator for comparison with other ChildrensBook objects
    bool operator<=(const Entity&) const;
    // == operator for comparison with other ChildrensBook objects
    bool operator==(const Entity&) const;
    // Outputs the object to command line
    void display() const;
    // Returns type of entity
    char getType() const;
private:
    string author;  // The book's author
    string title;   // The book's title
};

#endif