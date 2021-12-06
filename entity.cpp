// Entity base class
// Created by Austin
// CSS 343 Assignment_4 Implementation

#include "entity.h"

//-----------------------------------------------------------------------------
//
// Entity class: base class for an object/item storable in a library
//
// Implementation and assumptions:
//  -- every Entity object has a date of release/publication
//  -- every Entity object has data members to keep track of the amount of
//     copies in a library and the number of copies that have been checked out
//  -- every Entity object has an array of Patrons who have checked out a copy
//     of the object
//  -- assumes derived classes implement the methods of this class
//-----------------------------------------------------------------------------

// Constructor initializes numCheckedOut to 0 and data on copies to 5, also
// calls default Date constructor to set date to day=0 month="" year=0
Entity::Entity() : numCheckedOut(0), totalCopies(5), copiesAvailable(5),
    date(Date()) {}

// Virtual destructor
Entity::~Entity() {}

// Returns number of copies owned which aren't checked out
int Entity::getAvailableCopies() const {
    return copiesAvailable;
}
// Called when an Entity is checked in
void Entity::incrementAvailableCopies() {
    copiesAvailable++;
}
// Called when an Entity is checked out
void Entity::decrementAvailableCopies() {
    copiesAvailable--;
}