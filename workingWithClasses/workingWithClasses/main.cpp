//
//  main.cpp
//  workingWithClasses
//
//  Created by Christian Oxner on 2022-07-02.
//
#include <string.h>
#include <sstream>
#include <iostream>
using namespace std;
class Vehicle {

protected :
string license ;
int year ;

public :
Vehicle (const string &myLicense ,const int myYear)
: license (myLicense) , year(myYear){}

const string getDesc() const
    {return license + "from" + to_string(year) ;}

const string &getLicense() const {return license ;}
    const int getYear()
    const {return year ;}

 };

class Car : public Vehicle { // Makes Car inherit from Vehicle

string style ;
public :

Car (const string &myLicense , const int myYear , const string &myStyle)
    :Vehicle (myLicense ,myYear) , style (myStyle) {}
    
    const string getDesc() // Overriding this member function
    {return to_string(year) + ' ' + style + " : " + license; }

    const string &getStyle() {return style; }
 };
int main() {
    Car car("Christian", 1996, "BMW");
    std::cout << car.getDesc();
    
    
    
}
