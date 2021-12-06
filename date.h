// Date class
// Created by Camas, Harper, Griffin, Austin on 11/22/2021.
// CSS 343 Assignment_4 Design

#ifndef DATE_H
#define DATE_H

#include <string>
using std::string;

//-----------------------------------------------------------------------------
//
// Date class: holds the date (day, month, year) that a entity was released
//             or published
// 
// Implementation and assumptions:
//  -- holds day as an integer, so single digit days have no leading 0
//  -- holds month as an integer, single digit months have no leading 0
//  -- does not assume the full date is always known
//-----------------------------------------------------------------------------

class Date {
public:
    // Constructor, creates Date with parameter values or default if none
    // provided
    Date();
    // Sets day to parameter
    void setDay(int);
    // Sets month to parameter
    void setMonth(int);
    // Sets year to parameter
    void setYear(int);
    // Returns day
    int getDay() const;
    // Returns month
    int getMonth() const;
    // Returns Year
    int getYear() const;

private:
    int day;        // date
    int month;   // month
    int year;       // year
};

#endif // DATE_H