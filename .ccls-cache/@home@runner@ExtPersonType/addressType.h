#ifndef ADDRESSTYPE_H
#define ADDRESSTYPE_H

#include <string>
#include <iostream>
using namespace std;

class addressType
{
private:
    string address;
    string city;
    string state;
    int zipcode;

public:
    // Default constructor
    addressType() 
    {
        address = "";
        city = "";
        state = "XX";  // Default state value
        zipcode = 10000;  // Default zipcode value
    }

    // Constructor with parameters
    addressType(string addr, string cty, string st, int zip)
    {
        address = addr;
        city = cty;
        setState(st);
        setZipcode(zip);
    }

    // Setters
    void setAddress(string addr)
    {
        address = addr;
    }

    void setCity(string cty)
    {
        city = cty;
    }

    void setState(string st)
    {
        if (st.length() == 2)
            state = st;
        else
            state = "XX";  
    }

    void setZipcode(int zip)
    {
        if (zip >= 11111 && zip <= 99999)
            zipcode = zip;
        else
            zipcode = 10000;  
    }

    // Getters
    string getAddress() const
    {
        return address;
    }

    string getCity() const
    {
        return city;
    }

    string getState() const
    {
        return state;
    }

    int getZipcode() const
    {
        return zipcode;
    }

    // print the address
    void print() const
    {
        if (address != "")
            cout << address << endl;
        cout << city << " " << state << ", " << zipcode << endl;
    }
};

#endif
