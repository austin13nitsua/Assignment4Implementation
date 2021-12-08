//Tree simple class
//Created by Camas, Harper, Griffin, Austin on 11/20/2021.
//CSC 343 Assignment_4 Design

#include "tree.h"
#include <iostream>

using std::cout;

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

Tree::Tree() : root(nullptr) {}

Tree::~Tree() {
    deleteNode(root);
}

void Tree::deleteNode(Node*& curNode) {
    // Base case, node does not exist
    if(curNode == nullptr) {
        return;
    }
    // Recursively delete left subtree
    deleteNode(curNode->left);
    // Recursively delete right subtree
    deleteNode(curNode->right);
    // Delete curNode
    delete curNode; // Node destructor handles deleting data within node
    curNode = nullptr;
}

void Tree::display() const {
    inOrderTraversal(root);
} //Displays tree in inorder traversal

void Tree::inOrderTraversal(Node* curNode) const {
    // Base case, node doesn't exist
    if(curNode == nullptr) {
        return;
    }
    // Process left child
    inOrderTraversal(curNode->left);
    // Process root
    curNode->data->display();
    cout << endl;
    // Process right child
    inOrderTraversal(curNode->right);
}

void Tree::insert(Entity* libraryEntity) {
    if(libraryEntity == nullptr) {
        cout << "Error: Tree insert() Entity argument is nullptr" << endl;
        return;
    }
    insertHelper(libraryEntity, root);
}

void Tree::insertHelper(Entity* libraryEntity, Node*& curNode) {
    // Root is null, create a new node and set its data to libraryEntity
    if(curNode == nullptr) {
        curNode = new Node();
        curNode->data = libraryEntity;
        return;
    }
    // libraryEntity is less than curNode, recursively insert left subtree
    if(*libraryEntity < *(curNode->data)) {
        insertHelper(libraryEntity, curNode->left);
    }
    // libraryEntity is greater than curNode, recursively insert right subtree
    else {
        insertHelper(libraryEntity, curNode->right);
    }
}

Entity* retrieve(const Entity&); //finds and returns an entity