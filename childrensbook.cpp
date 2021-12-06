// ChildrensBook derived class
// Created by Austin
// CSS 343 Assignment_4 Implementation


#include "childrensbook.h"
#include "entity.h"
#include <iomanip>
#include <iostream>

using std::cout;

//-----------------------------------------------------------------------------
//
// ChildrensBook class: a type of Entity which is a story book for children
//
// Implementation and assumptions:
//  -- derived from Entity class so inherits Entity's members and methods
//     and implements these
//  -- additionally has data members for the book's author and title
//-----------------------------------------------------------------------------

// Default Constructor, sets default values for data members
ChildrensBook::ChildrensBook() : author(""), title("") {}

// Create, uses input file to set the object's data members
Entity* ChildrensBook::create(ifstream& inputFile) {
    // Create a new ChildrensBook to be returned
    ChildrensBook* toReturn = new ChildrensBook();

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

// Returns author member
string ChildrensBook::getAuthor() {
    return author;
}

// Returns title member
string ChildrensBook::getTitle() {
    return title;
}

// > operator for comparison with other ChildrensBook objects
bool ChildrensBook::operator>(const Entity& other) const {
    // Cast Entity to ChildrensBook
    const ChildrensBook& rhs = static_cast<const ChildrensBook&>(other);

    // Sorted by title, then by author
    // Compare titles
    if(title > rhs.title) {
        return true;
    }
    // Compare authors if titles match
    else if(title == rhs.title) {
        return author > rhs.author ? true : false;
    }
    // rhs is greater
    else {
        return false;
    }
}

// < operator for comparison with other ChildrensBook objects
bool ChildrensBook::operator<(const Entity& other) const{
    // Cast Entity to ChildrensBook
    const ChildrensBook& rhs = static_cast<const ChildrensBook&>(other);

    // Let operator> do the work
    return !(*this > rhs);
}

// >= operator for comparison with other ChildrensBook objects
bool ChildrensBook::operator>=(const Entity& other) const{
    // Cast Entity to ChildrensBook
    const ChildrensBook& rhs = static_cast<const ChildrensBook&>(other);
    // Sorted by title, then by author
    // Compare titles
    if(title >= rhs.title) {
        return true;
    }
    // rhs is greater
    else {
        return false;
    }
}

// <= operator for comparison with other ChildrensBook objects
bool ChildrensBook::operator<=(const Entity& other) const{
    // Cast Entity to ChildrensBook
    const ChildrensBook& rhs = static_cast<const ChildrensBook&>(other);
    // Sorted by title, then by author
    // Compare titles
    if(title <= rhs.title) {
        return true;
    }
    // rhs is smaller
    else {
        return false;
    }
}

// == operator for comparison with other ChildrensBook objects
bool ChildrensBook::operator==(const Entity& other) const{
    // Cast Entity to ChildrensBook
    const ChildrensBook& rhs = static_cast<const ChildrensBook&>(other);

    // Check if books have same data, comparing date is assumed to be
    // superlative given that an author shouldn't release two books with the
    // same name
    if(title == rhs.title && author == rhs.author) {
        return true;
    }
    return false;
}

// Outputs the object to command line
void ChildrensBook::display() const{
    cout << left;
    cout << setw(6) << copiesAvailable;
    cout << setw(30) << author;
    cout << setw(40) << title;
    cout << setw(4) << date.getYear();
}

// Returns type of entity
char ChildrensBook::getType() const {
    // 'C' denotes a ChildrensBook
    return 'C';
}