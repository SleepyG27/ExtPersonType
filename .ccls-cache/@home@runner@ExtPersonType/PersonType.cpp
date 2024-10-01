#include "personType.h"

// Default constructor
personType::personType() {
    firstName = "";
    lastName = "";
}

// Constructor with parameters
personType::personType(string fName, string lName) {
    firstName = fName;
    lastName = lName;
}

// Getter for first name
string personType::getFirstName() const {
    return firstName;
}

// Getter for last name
string personType::getLastName() const {
    return lastName;
}

// Print function to display the person's name
void personType::print() const {
    cout << firstName << " " << lastName;
}
