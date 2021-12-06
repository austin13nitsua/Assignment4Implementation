// Date class
// Created by Austin
// CSS 343 Assignment_4 Implementation

#include "date.h"

//-----------------------------------------------------------------------------
//
// Date class: holds the date (day, month, year) that a entity was released
//             or published
//
// Implementation and assumptions:
//  -- holds day as an integer, so single digit days have no leading 0
//  -- holds month as a string not an integer
//  -- does not assume the full date is always known
//-----------------------------------------------------------------------------

// Default constructor, creates Date without any values
Date::Date() : day(0), month(0), year(0) {}
// Sets day to parameter
void Date::setDay(int newDay) {
    day = newDay;
}
// Sets month to parameter
void Date::setMonth(int newMonth) {
    month = newMonth;
}
// Sets year to parameter
void Date::setYear(int newYear) {
    year = newYear;
}
// Returns day
int Date::getDay() const {
    return day;
}
// Returns month
int Date::getMonth() const {
    return month;
}
// Returns Year
int Date::getYear() const {
    return year;
}