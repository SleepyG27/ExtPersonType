#ifndef EXTPERSONTYPE_H
#define EXTPERSONTYPE_H

#include "personType.h"
#include "dateType.h"
#include "addressType.h"

class extPersonType : public personType {
private:
    dateType birthdate;       // dateType object for birthdate
    addressType address;      // addressType object for address
    string phoneNumber;       // Phone number
    string relationship;      // Relationship type

public:
    // Default constructor
    extPersonType();

    // Constructor with parameters
    extPersonType(string fName, string lName, int month, int day, int year,
                   string addr, string city, string state, int zip,
                   string phone, string relation);

    // Setters
    void setPhoneNumber(string phone);
    void setRelationship(string relation);

    // Getters
    string getPhoneNumber() const;
    string getRelationship() const;
    int getBirthMonth() const; // To get birth month from birthdate

    // Print function to display the complete entry
    void print() const;
};

#endif
