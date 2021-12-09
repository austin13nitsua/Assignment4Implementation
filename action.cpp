// Action base class
// Created by Austin
// CSS 343 Assignment_4 Implementation

#include "action.h"

// Constructor
Action::Action(Database* database) : data(database) {}

// Virtual Destructor
Action::~Action() {}