//Tree simple class
//Created by Camas, Harper, Griffin, Austin on 11/20/2021.
//CSC 343 Assignment_4 Design

#ifndef TREE_H
#define TREE_H

#include "node.h"

//------------------------------------------------------------------------------
/**
 * Tree Class: Basic storage container for the root of a tree
 *  --Tree stored data of type Node containing Entity
 *  --Tree sorting is determined by genre of Entity stored in Nodes
 *  --This class is a way to store trees in a hash table for easier access
 *  --Hash table is stored in Database
 *  --Hash key for table lookup is the single char representing entity genre
 *
 *  Implementation and Assumption:
 *      --class acts as a container for hash table storage
 *      --all trees are unique to a genre of Entity
 *      --all trees are stored in the Database
 *      --an Entity is created before insertion into the tree
 *      --does not check for non-Entity classes passed in
 *      --every Entity passed in should be properly formatted
 */
//------------------------------------------------------------------------------

class Tree {

public:

    Tree();
    ~Tree();
    void display() const; //Displays tree in inorder traversal
    void insert(Entity*); //adds a Node to a tree
    Entity* retrieve(const Entity&); //finds and returns an entity

private:

protected:

    Node* root = nullptr;

};


#endif //TREE_H
