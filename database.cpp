//Database simple class
//Created by Austin
//CSC 343 Assignment_4 Implementation

#include "database.h"

Database::Database() {
    // Set Patron table to null
    pTable = nullptr;

    // Set all of Tree Hash Table to null
    for(int i = 0; i < T_TABLE_SIZE; i++) {
        treeHashTable[i] = nullptr;
    }

    // Hardcode the tables which will exist
    // ChildrensBook Tree
    treeHashTable[2] = new Tree();
    // FictionBook Tree
    treeHashTable[5] = new Tree();
    // Periodical Tree
    treeHashTable[15] = new Tree();

    // Create Entity Factory
    entityFactory = new EntityFactory();
} //default Constructor

Database::~Database() {
    delete pTable;
    pTable = nullptr;
    for(int i = 0; i < T_TABLE_SIZE; i++) {
        delete treeHashTable[i];
        treeHashTable[i] = nullptr;
    }
    delete entityFactory;
    entityFactory = nullptr;
}

void Database::buildTrees(ifstream& inputFile) {
    char code;
    int index;
    do {
        inputFile >> code;
        index = treeHash(code);
        // Tree for this code doesn't yet exist
        if(treeHashTable[index] == nullptr) {
            string temp;
            getline(inputFile, temp);
            continue;
        }
        // Create the entity to add to the factory
        Entity* tempEntity = entityFactory->createFromFile(inputFile);
        // Can't build the entity, skip to next line
        if(tempEntity == nullptr) {
            continue;
        }
        treeHashTable[index]->insert(tempEntity);
    }
    while(!inputFile.eof());
} //Build trees from input entity file

Entity* Database::getEntity(ifstream& inputFile) const {
    // Get a comparison Entity from the factory
    Entity* tempEntity = entityFactory->createFromFile(inputFile);
    return tempEntity;
} //returns a specific entity

void Database::displayTrees() {} //displays a tree

void Database::buildPatronTable(ifstream& inputFile) {
    pTable = new PatronHashTable();
    pTable->buildTable(inputFile);
} //builds a patron table

Patron* Database::getPatron(int patronID) {
    return pTable->retrieve(patronID);
} //returns a specific patron from an ID

int Database::treeHash(char ch) const {
    return ch - 'A';
} // returns a key for tree hash table