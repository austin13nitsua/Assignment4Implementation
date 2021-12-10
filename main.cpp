// Main
// Created by Camas, Harper, Griffin, Austin on 11/22/2021.
// CSS 343 Assignment_4 Design

//---------------------------------------------------------------------------
// main.cpp
//---------------------------------------------------------------------------
// Assumptions:
//   -- all data files are formatted correctly
//---------------------------------------------------------------------------

//#include "manager.h"
#include <iostream>
//#include <fstream>
//#include "entityfactory.h"
//#include "tree.h"
#include "database.h"

using namespace std;

int main() {
   /* ORIGINAL MAIN
    ifstream infile1("patronData.txt");
   ifstream infile2("entityData.txt");
   ifstream infile3("actionData.txt");

   Manager m = new Manager();

   m.buildTreeDataStores(infile1);
   m.buildPatronDataStore(infile2);
   m.buildActionQueue(infile3);
   m.executeActions();
   END ORIGINAL MAIN
   */

    ifstream inputFile1("C:\\Users\\austi\\Documents\\College\\UWB\\"
                        "2021-22\\FALL21\\CSS 343\\Assignment4Implementation\\"
                        "data4patrons.txt");
    ifstream inputFile2("C:\\Users\\austi\\Documents\\College\\UWB\\"
                        "2021-22\\FALL21\\CSS 343\\Assignment4Implementation\\"
                        "data4books.txt");

   Database db;
   db.buildPatronTable(inputFile1);
   db.buildTrees(inputFile2);

   return 0;
}
