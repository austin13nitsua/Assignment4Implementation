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
#include <fstream>
#include "entityfactory.h"
#include "tree.h"

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

   /*

   // Testing section below
   EntityFactory eFactory;
   ifstream inputFile("efactorytest.txt");


   Entity* entities[20];
   for(int i = 0; i < 10; i++) {
       entities[i] = nullptr;
   }

   for(int i = 0; i < 10; i++) {
       Entity* temp = eFactory.createFromFile(inputFile);
       entities[i] = temp;
   }

   for(int i = 0; i < 10; i++) {
       entities[i]->display();
       cout << endl;
       delete entities[i];
       entities[i] = nullptr;
   }
    */

   Tree libTree;
   libTree.display();

   EntityFactory entityFactory;
   ifstream inputFile("C:\\Users\\austi\\Documents\\College\\UWB\\"
                      "2021-22\\FALL21\\CSS 343\\Assignment4Implementation\\"
                      "efactorytest.txt");
   cout << "Entering while loop" << endl;

   Entity* temp = nullptr;
   do {
       temp = entityFactory.createFromFile(inputFile);
       libTree.insert(temp);
   }
   while(temp != nullptr);

   cout << "Exited while loop" << endl;
   libTree.display();
   cout << "after libTree.display()" << endl;

   return 0;
}
