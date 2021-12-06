// FictionBook derived class
// Created by Austin
// CSS 343 Assignment_4 Implementation

#include "entity.h"
#include "fictionbook.h"
#include <iomanip>
#include <iostream>

using std::cout;

//-----------------------------------------------------------------------------
//
// FictionBook class: a type of Entity which is a novel
//
// Implementation and assumptions:
//  -- derived from Entity class so inherits Entity's members and methods
//     and implements these
//  -- additionally has data members for the book's author and title
//-----------------------------------------------------------------------------

// Constructor
FictionBook::FictionBook() : author(""), title("") {}

// Creates from input file
Entity* FictionBook::create(ifstream& inputFile) {
    // Create a new FictionBook to be returned
    FictionBook* toReturn = new FictionBook();

    // Begin reading and setting data for return object
    // Read blank before author
    inputFile.get();
    // Get and set author
    getline(inputFile, toReturn->author, ',');
    // Read blank before title
    inputFile.get();
    // Get and set title
    getline(inputFile, toReturn->title, ',');
    // Get and set year
    int year;
    inputFile >> year;
    toReturn->date.setYear(year);
    // End of reading and setting

    return toReturn;
}

// Returns the author
string FictionBook::getAuthor() {
    return author;
}
// Returns the Title
string FictionBook::getTitle() {
    return title;
}

// > operator for comparison with other FictionBook objects
bool FictionBook::operator>(const Entity& other) const {
    // Cast Entity to ChildrensBook
    const FictionBook& rhs = static_cast<const FictionBook&>(other);

    // Sorted by author, then by title
    // Compare authors
    if(author > rhs.author) {
        return true;
    }
    // Compare titles if authors match
    else if(author == rhs.author) {
        return title > rhs.title ? true : false;
    }
    // rhs is greater
    else {
        return false;
    }
}

// < operator for comparison with other FictionBook objects
bool FictionBook::operator<(const Entity& other) const {
    // Cast Entity to ChildrensBook
    const FictionBook& rhs = static_cast<const FictionBook&>(other);

    // Let operator> do the work
    return !(*this > rhs);
}

// >= operator for comparison with other FictionBook objects
bool FictionBook::operator>=(const Entity& other) const {
    // Cast Entity to ChildrensBook
    const FictionBook& rhs = static_cast<const FictionBook&>(other);

    // Sorted by author, then by title
    // Compare titles
    if(author == rhs.author) {
        return true;
    }
    // rhs is greater
    else {
        return false;
    }
}
// <= operator for comparison with other FictionBook objects
bool FictionBook::operator<=(const Entity& other) const {
    // Cast Entity to ChildrensBook
    const FictionBook& rhs = static_cast<const FictionBook&>(other);

    // Sorted by author, then by title
    // Compare authors
    if(author <= rhs.author) {
        return false;
    }
    // rhs is smaller
    else {
        return false;
    }
}
// == operator for comparison with other FictionBook objects
bool FictionBook::operator==(const Entity& other) const {
    // Cast Entity to ChildrensBook
    const FictionBook& rhs = static_cast<const FictionBook&>(other);

    // Check if books have same data, comparing date is assumed to be
    // superlative given that an author shouldn't release two books with the
    // same name
    if(title == rhs.title && author == rhs.author) {
        return true;
    }
    return false;
}

// Outputs the object to command line
void FictionBook::display() const {
    cout << left;
    cout << setw(6) << copiesAvailable;
    cout << setw(30) << author;
    cout << setw(40) << title;
    cout << setw(4) << date.getYear();
}
// Returns type of entity
char FictionBook::getType() const {
    // 'F' denotes a FictionBook
    return 'F';
}