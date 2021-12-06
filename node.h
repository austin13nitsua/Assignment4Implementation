//Node simple class
//Created by Camas, Harper, Griffin, Austin on 11/20/2021.
//CSC 343 Assignment_4 Design

#ifndef ASSIGNMENT_4_NODE_H
#define ASSIGNMENT_4_NODE_H

#include "entity.h"


//------------------------------------------------------------------------------
/**
 * Node Class: traditional node class for storing Entity data in trees.
 *   --takes an Entity pointer as data
 *   --takes Node pointers for left and right children
 *
 *   Implementation and Assumption:
 *      --Node class will not be accessible to the client
 *      --all data inn node class is public to relevant classes in the Library
 *      --Data in the node class is stored as an Entity exclusively
 */
//------------------------------------------------------------------------------

class Node {

public:
    Node();
    ~Node();
    Entity* data;
    Node* left;
    Node* right;
};

#endif //ASSIGNMENT_4_NODE_H
