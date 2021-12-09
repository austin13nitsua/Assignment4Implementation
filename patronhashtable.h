//PatronHashTable simple class
//Created by Camas, Harper, Griffin, Austin on 11/20/2021.
//CSC 343 Assignment_4 Design

#ifndef PATRONHASHTABLE_H
#define PATRONHASHTABLE_H

#include <fstream>
#include <iostream>
#include "patron.h"

using std::ifstream;

//------------------------------------------------------------------------------
/**
 * PatronHashTable: Class for the storage, addition, and retrieval of Patrons
 *  --Class is built in the Database
 *  --Data stored int the hash table is:
 *    ->Read from a passed in input file line
 *    ->Created and stored as a Patron
 *    ->Key for Patron lookup is the Patron ID#
 *  --Able to add new Patrons after hash table has been populated from file
 *
 *  Implementation and Assumption:
 *      --all patrons are stored in this table
 *      --all patrons have a unique ID# associated with them for lookup
 *      --Maximum of 10,000 Patrons with unique ID#'s can be stored
 */
//------------------------------------------------------------------------------

const int PTABLE_SIZE = 97; // Max size of hash table, can be changed to
                            // accommodate more patrons, prime number to avoid
                            // collisions

class PatronHashTable {

public:

    PatronHashTable(); //default constructor
    ~PatronHashTable();
    //Takes a input file, builds Patrons and adds them to the table
    void buildTable(ifstream&);
    //Takes an ID# as a parameter and returns the associated Patron
    Patron* retrieve(int) const;
    //takes a pre-made Patron and adds it to the hash table
    bool insert(Patron*);
    // hash function for patron hash table, returns index
    int hash(int);

private:

    //array for hash table with key set to Patron ID#
    Patron* pHashTable[PTABLE_SIZE];
    int numPatrons;

protected:


};

#endif // PATRONHASHTABLE_H
