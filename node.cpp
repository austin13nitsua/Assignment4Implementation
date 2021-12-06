//Node simple class
//Created by Austin
//CSC 343 Assignment_4 Implementation

#include "node.h"

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

Node::Node() : data(nullptr), left(nullptr), right(nullptr) {}

Node::~Node() {
    delete data;
    delete left;
    delete right;
    data = nullptr;
    left = nullptr;
    right = nullptr;
}
