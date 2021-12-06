//EntityFactory simple class
//Created by Camas, Harper, Griffin, Austin on 11/20/2021.
//CSC 343 Assignment_4 Design

#ifndef ENTITYFACTORY_H
#define ENTITYFACTORY_H

#include <fstream>
#include "entity.h"
#include "fictionbook.h"
#include "periodical.h"
#include "childrensbook.h"

using namespace std;


//---------------------------------------------------------------------------//
//
// entityFactory class takes in an infile, reads the next char and returns
//  the associated hash char entity
// 
// Implementation and assumptions:
//    -- create is called on the found action to return
//    -- entities are initialized in constructor
//    -- entityFactory array initializes all not used values to nullptr
// 
//---------------------------------------------------------------------------//

class EntityFactory {
private:
    Entity* entityFactory[26]; // hardcode alphabet hashtable
    int hash(char ch) const;  //A-Z index return for hash index

public:

	//set nullptr for all values then 
	//initialize reference entities in entityFactory array
    EntityFactory();
	
	//delete all actions in actionFactory array and set nullptr
    ~EntityFactory();

    // creates entities from an input file
    Entity* createFromFile(ifstream&);
};


#endif // ENTITYFACTORY_H