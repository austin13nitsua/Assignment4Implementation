//Patron simple class
//Created by Austin
//CSC 343 Assignment_4 Implementation

#include "patron.h"
#include "action.h"

// Default constructor, sets data members to default values
Patron::Patron() : idNum(-1) {}   //default

Patron::~Patron() {
//??
}

void Patron::addEntity(Entity* libraryEntity) {
    checkedOut.push_back(libraryEntity);
} //adds an entity to the checkedOut list

void Patron::removeEntity(Entity* libraryEntity) {
    checkedOut.remove(libraryEntity);
} //removes from same list (check-in)

//records all actions taken by patron in patronHistory queue
void Patron::addToHistory(Action* newAction) {
    patronHistory.push(newAction);
}

void Patron::display() {
    // Print out patron details
    cout << idNum << '\t' << last << ", " << first << ":" << endl;
    // Loop through patron's history queue
    for(int i = 0; i < patronHistory.size(); i++) {
        Action* temp = patronHistory.front();
        cout << '\t';
        temp->display();
        cout << endl;
        patronHistory.pop();
        patronHistory.push(temp);
    }
} //displays patron history

Person* Patron::setData(ifstream& inputFile) {
    inputFile >> idNum;
    if(inputFile.eof()) {
        return nullptr;
    }
    inputFile >> last;
    inputFile >> first;
    return this;
}

int Patron::getID() {
    return idNum;
}