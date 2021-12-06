//ActionFactory simple class
//Created by Camas, Harper, Griffin, Austin on 11/20/2021.
//CSC 343 Assignment_4 Design

#ifndef ACTIONFACTORY_H
#define ACTIONFACTORY_H
#include "action.h"
#include "actionfactory.h"
#include "checkinaction.h"
#include "checkoutaction.h"
#include "database.h"
#include "displayaction.h"
#include <fstream>

using namespace std;


//---------------------------------------------------------------------------//
//
// ActionFactory class takes in an infile, reads the next char and returns
//  the associated hash char action
// 
// Implementation and assumptions:
//    -- create is called on the found action to return
//    -- actions are initialized in constructor
//    -- actionFactory array initializes all not used values to nullptr
// 
//---------------------------------------------------------------------------//

class ActionFactory {
private:
    Action* actionFactory[26]; // hardcode alphabet hashtable
    int hash(char ch) const; //A-Z index return for hash index

public:

	//set nullptr for all values then 
	//initialize reference actions in actionFactory array
    ActionFactory();
	
	//delete all actions in actionFactory array and set nullptr
    ~ActionFactory();

	// function to call create from the specific action in actionFactory
    Action* createIt(char ch) const;
};

#endif // !ACTIONFACTORY_H