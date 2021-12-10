//EntityFactory simple class
//Created by Austin
//CSC 343 Assignment_4 Implementation

#include "entityfactory.h"
#include <ctype.h>
#include <iostream>
#include <fstream>

using std::cout;

//---------------------------------------------------------------------------//
//
// entityFactory class takes in an infile, reads the next char and returns
//  the associated hash char entity
//
// Implementation and assumptions:
//    -- create is called on the found action to return
//    -- entities are initialized in constructor
//    -- entityFactory array initializes all not used values to nullptr
//    -- letters in input files can be lower or upper case
//---------------------------------------------------------------------------//

// set nullptr for all values then
// initialize reference entities in entityFactory array
EntityFactory::EntityFactory() {
    // Set all indexes to nullptr
    for(int i = 0; i < 26; i++) {
        entityFactory[i] = nullptr;
    }
    // Create reference entities
    entityFactory[2] = new ChildrensBook;
    entityFactory[5] = new FictionBook;
    entityFactory[15] = new Periodical;
}

// delete all entities in entityFactory array and set to nullptr
EntityFactory::~EntityFactory() {
    for(int i = 0; i < 26; i++) {
        delete entityFactory[i];
        entityFactory[i] = nullptr;
    }
}

// creates entity from an input file
Entity* EntityFactory::createFromFile(ifstream& inputFile) {
    char ch;
    inputFile >> ch;
    if(inputFile.eof()) {
        cout << "Error: EntityFactory createFromFile(), end of file reached";
        cout << endl;
        return nullptr;
    }
    cout << "ch: " << ch << endl;
    // Char is a letter
    int index = hash(toupper(ch));
    // Check if index is a valid integer
    if(index < 0 || index > 26) {
        return nullptr;
    }
    // Check if index refers to a valid Entity object
    if(entityFactory[index] == nullptr) {
        return nullptr;
    }
    // Return a newly created instance of the Entity
    return entityFactory[index]->create(inputFile);
    if(isalpha(ch)) {
        int index = hash(toupper(ch));
        return entityFactory[index]->create(inputFile);
    }
    // Char isn't a letter, invalid
    else {
        cout << "Error: EntityFactory createFromFile(), ";
        cout << "char argument is not a letter";
        cout << endl;

        // Read rest of line and return nullptr
        string temp;
        getline(inputFile, temp);
        return nullptr;
    }
}

int EntityFactory::hash(char ch) const {
    return ch - 'A';
}