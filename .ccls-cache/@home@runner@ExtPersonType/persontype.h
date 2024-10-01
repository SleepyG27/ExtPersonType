#ifndef PERSONTYPE_H
#define PERSONTYPE_H

#include <string>
#include <iostream>
using namespace std;

class personType {
private:
    string firstName;
    string lastName;

public:
    // Default constructor
    personType();

    // Constructor with parameters
    personType(string fName, string lName);

    // Getters
    string getFirstName() const;
    string getLastName() const;

    // Print function to display the person's name
    void print() const;
};

#endif
