// FictionBook derived class
// Created by Camas, Harper, Griffin, Austin on 11/22/2021.
// CSS 343 Assignment_4 Design

#ifndef FICTIONBOOK_H
#define FICTIONBOOK_H

#include <string>

using namespace std;

//-----------------------------------------------------------------------------
//
// FictionBook class: a type of Entity which is a novel
// 
// Implementation and assumptions:
//  -- derived from Entity class so inherits Entity's members and methods
//     and implements these
//  -- additionally has data members for the book's author and title
//-----------------------------------------------------------------------------

class FictionBook : public Entity {
public:
    // Constructor
    FictionBook();
    // Creates from input file
    Entity* create(ifstream&);
    // Returns the author
    string getAuthor();
    // Returns the Title
    string getTitle();
    // > operator for comparison with other FictionBook objects
    bool operator>(const Entity&) const;
    // < operator for comparison with other FictionBook objects
    bool operator<(const Entity&) const;
    // >= operator for comparison with other FictionBook objects
    bool operator>=(const Entity&) const;
    // <= operator for comparison with other FictionBook objects
    bool operator<=(const Entity&) const;
    // == operator for comparison with other FictionBook objects
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