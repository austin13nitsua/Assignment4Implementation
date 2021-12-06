// Manager derived class
// Created by Camas, Harper, Griffin, Austin on 11/22/2021.
// CSS 343 Assignment_4 Design

#ifndef MANAGER_H
#define MANAGER_H
#include <queue>
#include <fstream>
#include "action.h"
#include "database.h"

using namespace std;


//---------------------------------------------------------------------------//
//
// Manager class: the class manager is the main interface for communicating
// with the library SHHH system
// 
// Implementation and assumptions:
//   -- all data files are formatted correctly
//   -- executeActions is called after buildActionQueue(), BuildpatronDataStore
//        and buildTreeDataStores
//   -- actionFactory returns actions
//   -- actions are null if they fail to execute
// 
//---------------------------------------------------------------------------//


class Manager {
public:
   Manager(); // constructor initializes database and action factory
   ~Manager(); // destructor
	
	void buildActionQueue(ifstream&); // builds action queue using action factory
	void buildPatronDataStore(ifstream&); // passes patron datafile to database
	void buildTreeDataStores(ifstream&); // passes tree datafile to database
	
	void executeActions();
private:
	// singleton database to hold all entity/patron data
	DatabaseSingleton* database; 
	
	// action factory to create specific actions
	ActionFactory* actionFactory; 
	
	// queue of actions to be exececuted
	Queue<Action*>;
};


#endif // !MANAGER_H