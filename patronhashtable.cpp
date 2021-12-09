//PatronHashTable simple class
//Created Austin
//CSC 343 Assignment_4 Implementation

#include "patronhashtable.h"

using std::cout;
using std::endl;

// Default constructor, sets pHashTable to nullptr
PatronHashTable::PatronHashTable() {
    // Fill patron hash table with nullptrs
    for(int i = 0; i < PTABLE_SIZE; i++) {
        pHashTable[i] = nullptr;
    }
    numPatrons = 0;
}

// Destructor
PatronHashTable::~PatronHashTable() {
    for(int i = 0; i < PTABLE_SIZE; i++) {
        delete pHashTable[i];
        pHashTable[i] = nullptr;
    }
}

void PatronHashTable::buildTable(ifstream& inputFile) {
    // Fill the table from the file using a loop
    do {
        // Temporary Patron pointer used to add Patrons to table
        Patron* temp = new Patron();
        // Person pointer checks if setData reached the end of the file
        Person* nullCheck;
        // Attempt to read and set the data for a Patron
        nullCheck = temp->setData(inputFile);
        // setData returned nullptr if it reached end of file
        if(nullCheck == nullptr) {
            // Get rid of temp and return
            delete temp;
            temp = nullptr;
            return; // Note: change this to break for debugging
        }
        // Insert returns false, can't keep inserting
        if(!insert(temp)) {
            // Get rid of temp and return
            delete temp;
            temp = nullptr;
            return;
        }
    }
    while(!inputFile.eof());


    // Debugging: testing to see what table has, shouldn't be reached unless
    //            returns are changed to breaks above
    for(int i = 0; i < PTABLE_SIZE; i++) {
        if(pHashTable[i] != nullptr) {
            cout << "Patron " << i << ": ";
            pHashTable[i]->display();
        }
        else {
            cout << "Patron " << i << ": nullptr" << endl;
        }
    }

}

Patron* PatronHashTable::retrieve(int key) const {
    return pHashTable[key];
}

bool PatronHashTable::insert(Patron* newPatron) {
    // Hash table is full
    if(numPatrons >= PTABLE_SIZE) {
        cout << "Error: PatronHashTable insert() - Hash table is full" << endl;
        return false;
    }

    // Generate a hash index
    int index = hash(newPatron->getID());

    // Attempt to insert Patron at index
    if(pHashTable[index] == nullptr) {
        pHashTable[index] = newPatron;
        numPatrons++;
        return true;
    }
    // Collision handling
    else {
        // Start with 1st collision
        int collision = 1;
        while(true) {
            // If resolution index walks off the array, reset to 0
            // Note: I don't really like doing this, but I don't have the time
            //       to make a more clever hash function
            if(index+collision >= PTABLE_SIZE) {
                index = 0 - collision;
            }
            // Free index found!
            if(pHashTable[index+collision] == nullptr) {
                pHashTable[index+collision] = newPatron;
                numPatrons++;
                return true;
            }
            // Increment collisions (ith collision)
            collision++;
        }
    }
}

int PatronHashTable::hash(int key) {
    // Any index in the table can be used theoretically... I think...
    return key % PTABLE_SIZE + 1;
}