 #include "extPersonType.h"

 // Default constructor
 extPersonType::extPersonType() : personType(), birthdate(), address() {
     phoneNumber = "";
     relationship = "XX";  // Default relationship
 }

 // Constructor with parameters
 extPersonType::extPersonType(string fName, string lName, int month, int day, int year,
                              string addr, string city, string state, int zip,
                              string phone, string relation)
     : personType(fName, lName), birthdate(month, day, year), address(addr, city, state, zip) {
     phoneNumber = phone;
     setRelationship(relation);
 }

 // Setters
 void extPersonType::setPhoneNumber(string phone) {
     phoneNumber = phone;
 }

 void extPersonType::setRelationship(string relation) {
     if (relation == "Family" || relation == "Friend" || relation == "Business") {
         relationship = relation;
     } else {
         cout << "Invalid relationship. Setting to default (XX)." << endl;
         relationship = "XX";
     }
 }

 // Getters
 string extPersonType::getPhoneNumber() const {
     return phoneNumber;
 }

 string extPersonType::getRelationship() const {
     return relationship;
 }

 int extPersonType::getBirthMonth() const {
     return birthdate.getMonth(); // Use the getter for month
 }

 // Print function to display the complete entry
 void extPersonType::print() const {
     personType::print();  // Print name
     cout << endl;
     birthdate.print();    // Print birthdate
     cout << endl;
     address.print();      // Print address
     cout << phoneNumber << endl; // Print phone number
     cout << relationship; // Print relationship
     cout << endl;
 }
