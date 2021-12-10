// CheckOut derived class
// Created by Austin
// CSS 343 Assignment_4 Implementation

#include "checkout.h"

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

CheckOut::CheckOut() : customer(nullptr), entity(nullptr) {}

bool CheckOut::execute() {
    // If no database, action is null
    if(data == nullptr) {
        cout << "Error: CheckOut execute() no database supplied" << endl;
        return false;
    }
    // If no customer or entity, action is null
    if(customer == nullptr || entity == nullptr) {
        cout << "Error: CheckOut execute() no customer or entity supplied";
        cout << endl;
        return false;
    }
    // Check if there are copies available of the entity to check out
    if(entity->getAvailableCopies() <= 0) {
        cout << "Error: CheckOut execute() no available copies to check out";
        cout << endl;
        return false;
    }
    // Add entity to Patron's checkOut
    customer->addEntity(entity);
    // Decrement copiesAvailable for entity
    entity->decrementAvailableCopies();
    // Add to Patron's history
    customer->addToHistory(this);
    return true;
}

Action* CheckOut::create(ifstream& inputFile) {
    CheckOut* toReturn = new CheckOut();
    // Read in patron ID
    int patronId;
    inputFile >> patronId;
    // Retrieve correct Patron from hash table, set customer
    toReturn->customer = data->getPatron(patronId);
    // Can't find matching Patron to ID
    if(toReturn->customer == nullptr) {
        cout << "Error: CheckOut create() Patron ID not found" << endl;
        string temp;
        getline(inputFile, temp);
        delete toReturn;
        return nullptr;
    }
    Entity* tempEntity = data->getEntity(inputFile);
    if(tempEntity == nullptr) {
        cout << "Error: CheckOut create() Entity not found" << endl;
        delete toReturn;
        return nullptr;
    }
    // Set entity
    toReturn->entity = tempEntity;
    return toReturn;
}

void CheckOut::display() {
    cout << getType();
    entity->display();
    cout << endl;
}

string CheckOut::getType() {
    return "CheckOut";
}