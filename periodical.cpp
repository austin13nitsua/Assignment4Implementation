// Periodical derived class
// Created by Camas, Harper, Griffin, Austin on 11/22/2021.
// CSS 343 Assignment_4 Design

#include "periodical.h"
#include <iostream>
#include <iomanip>

using std::cout;

//-----------------------------------------------------------------------------
//
// Periodical class: a type of Entity which is a periodical (newsletter,
//                   magazine, etc.)
//
// Implementation and assumptions:
//  -- derived from Entity class so inherits Entity's members and methods
//     and implements these
//  -- additionally has a data member for the periodical's title
//-----------------------------------------------------------------------------

// Constructor
Periodical::Periodical() : title("") {}

Entity* Periodical::create(ifstream& inputFile) {
    // Create a new Periodical to be returned
    Periodical* toReturn = new Periodical;

    // Begin reading and setting data for return object
    // Read blank before title
    inputFile.get();
    // Get and set title
    getline(inputFile, toReturn->title, ',');
    // Read blank before month
    inputFile.get();
    // Get and set month
    int month, year;
    inputFile >> month;
    toReturn->date.setMonth(month);
    // Get and set year
    inputFile >> year;
    toReturn->date.setYear(year);
    // End of reading and setting

    return toReturn;
}

// Returns Periodical's title
string Periodical::getTitle() {
    return title;
}

// > operator for comparison with other Periodical objects
bool Periodical::operator>(const Entity& other) const {
    // Cast Entity to Periodical
    const Periodical& rhs = static_cast<const Periodical&>(other);

    // Sorted by Date (year then month), then by title
    // Sort by Year
    if(date.getYear() > rhs.date.getYear()) {
        return true;
    }
    // Compare months if years match
    else if(date.getYear() == rhs.date.getYear()) {
        // Compare months
        if(date.getMonth() > rhs.date.getMonth()) {
            return true;
        }
        // Compare by title if months match
        else if(date.getMonth() == rhs.date.getMonth()) {
            return title > rhs.title ? true : false;
        }
        // rhs is greater
        else {
            return false;
        }
    }
    // rhs is greater
    else {
        return false;
    }
}
// < operator for comparison with other Periodical objects
bool Periodical::operator<(const Entity& other) const {
    // Cast Entity to Periodical
    const Periodical& rhs = static_cast<const Periodical&>(other);

    // Let operator > do the work
    return !(*this > rhs);
}
// >= operator for comparison with other Periodical objects
bool Periodical::operator>=(const Entity& other) const {
    // Cast Entity to Periodical
    const Periodical& rhs = static_cast<const Periodical&>(other);

    // Sorted by Date (year then month), then by title
    // Compare years
    if(date.getYear() >= rhs.date.getYear()) {
        return true;
    }
    // rhs is greater
    else {
        return false;
    }
}

// <= operator for comparison with other Periodical objects
bool Periodical::operator<=(const Entity& other) const {
    // Cast Entity to Periodical
    const Periodical& rhs = static_cast<const Periodical&>(other);

    // Sorted by Date (year then month), then by title
    // Compare years
    if(date.getYear() <= rhs.date.getYear()) {
        return true;
    }
    // rhs is smaller
    else {
        return false;
    }
}
// == operator for comparison with other Periodical objects
bool Periodical::operator==(const Entity& other) const {
    // Cast Entity to Periodical
    const Periodical& rhs = static_cast<const Periodical&>(other);

    // Check if periodicals have same data
    if(title == rhs.title && date.getYear() == rhs.date.getYear()
        && date.getMonth() == rhs.date.getMonth()) {
        return true;
    }
    else {
        return false;
    }
}
// Outputs the object to command line
void Periodical::display() const {
    cout << left;
    cout << setw(6) << copiesAvailable;
    cout << setw(30) << title;
    cout << setw(4) << date.getMonth();
    cout << setw(4) << date.getYear();
}

char Periodical::getType() const {
    // 'P' denotes a Periodical
    return 'P';
}