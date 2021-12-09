//Person simple class
//Created by Austin
//CSC 343 Assignment_4 Implementation


#include "person.h"

// Default constructor, sets names to empty strings
Person::Person() : first(""), last("") {}

// Virtual destructor
Person::~Person() {}

// Returns first name
string Person::getFirst() const {
    return first;
}

// Returns last name
string Person::getLast() const {
    return last;
}