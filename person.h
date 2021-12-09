//Person simple class
//Created by Austin
//CSC 343 Assignment_4 Design

#ifndef ASSIGNMENT4IMPLEMENTATION_PERSON_H
#define ASSIGNMENT4IMPLEMENTATION_PERSON_H

#include <string>

using std::string;
using std::ifstream;

class Person {
public:
    // Default Constructor
    Person();
    // Virtual Destructor
    virtual ~Person();
    // Virtual create from file
    virtual Person* setData(ifstream&) = 0;
    // Returns first name
    string getFirst() const;
    // Returns last name
    string getLast() const;
protected:
    string first;   // first name
    string last;    // last name
};

#endif //ASSIGNMENT4IMPLEMENTATION_PERSON_H
