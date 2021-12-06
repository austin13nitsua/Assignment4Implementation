// Periodical derived class
// Created by Camas, Harper, Griffin, Austin on 11/22/2021.
// CSS 343 Assignment_4 Design

#ifndef PERIODICAL_H
#define PERIODICAL_H

#include "entity.h"
#include <string>

using namespace std;

//-----------------------------------------------------------------------------
//
// Periodical class: a type of Entity which is a periodical (newsletter,
//                   magazine, etc.)
// 
// Implementation and assumptions:
//  -- derived from Entity class so inherits Entity's members and methods
//     and implements these
//  -- additionally has a data member for the periodical's title
//-----------------------------------------------------------------------------

class Periodical : public Entity {
public:
    // Default constructor, sets data members to default values
    Periodical();
    // Creates from input file
    Entity* create(ifstream&);
    // Returns Periodical's title
    string getTitle();
    // > operator for comparison with other Periodical objects
    bool operator>(const Entity&) const;
    // < operator for comparison with other Periodical objects
    bool operator<(const Entity&) const;
    // >= operator for comparison with other Periodical objects
    bool operator>=(const Entity&) const;
    // <= operator for comparison with other Periodical objects
    bool operator<=(const Entity&) const;
    // == operator for comparison with other Periodical objects
    bool operator==(const Entity&) const;
    // Outputs the object to command line
    void display() const;
    // Returns type of entity
    char getType() const;
private:
    string title;   // The periodical's title
};

#endif //PERIODICAL_H