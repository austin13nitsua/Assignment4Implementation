//Database simple class
//Created by Camas, Harper, Griffin, Austin on 11/20/2021.
//CSC 343 Assignment_4 Design

#ifndef DATABASE_H
#define DATABASE_H
#include "entity.h"
#include "entityfactory.h"
#include "patronhashtable.h"
#include "tree.h"
#include <fstream>
#include <iostream>

//------------------------------------------------------------------------------
/**
 * Database Class: Directly below the Manager in hierarchy
 *  --Takes all input files containing data to be stored and processes it
 *  --Creates TreeHashTable and Populates it
 *    ->Trees are sorted by genre with unique sorting for each
 *    ->Tree Hash Key is the Char that denotes genre in the input file
 *    ->Able to find a specific tree in the treeHashTable for use
 *  --Creates PatronHashTable and populates it
 *    ->Reads and sends file to PatronHashTable Class for internal population
 *    ->Able to pull a Patron from PatronHashTable for use in other classes
 *  --Class is in charge of all permanent data in the library
 *
 *  Implementation and Assumption:
 *      --All passed in files are properly formatted
 *      --program will check for faulty data
 *      --database will store all data for a single manager
 *      --a new database will be build for every manager
 */
//------------------------------------------------------------------------------

class EntityFactory;

class Database {

public:

    Database(); //default Constructor
    ~Database();
    void buildTrees(ifstream&); //Build trees from input entity file
    Entity getEntity(ifstream&) const; //returns a specific entity
    void displayTrees(); //displays a tree
    void buildPatronTable(ifstream&); //builds a patron table
    Patron* getPatron(int); //returns a specific patron from an ID


private:

    PatronHashTable* pTable; //Creation of PatronHashTable Class
    Tree* treeHashTable; //Creation of Tree Hash Table
    EntityFactory* entityFactory; //initialize entity factory

    void createTreeHash(); //sets the built trees to the appropriate key
    Tree* getTreeFromChar(char) const; //pulls a specific tree from a char key

protected:

};

#endif //DATABASE_H