//
//  main.cpp
//  employeeFunctionsExample
//
//  Created by Christian Oxner on 2022-07-03.
//

#include <iostream>
#include <string>
using namespace std;
// have to use & to carry through rest of program
void employeeInfo(std::string &theEmployee, float &theHoursWorked, float &thePayRate) {
    cout << "Enter the employee name: ";
    getline(cin, theEmployee);
    cout << "Enter the hours worked: ";
    cin >> theHoursWorked;
    cout << "Enter hourly pay rate: ";
    cin >> thePayRate;
    
}

float employeePay(float theHoursWorked, float thePayRate) {
    float totalPay;
    float overtimeHours;
    if(theHoursWorked > 40) {
        totalPay = 40 * thePayRate;
        overtimeHours = theHoursWorked - 40;
        totalPay = totalPay + (overtimeHours * thePayRate * 1.5);
        return totalPay;
    } else {
        totalPay = theHoursWorked * thePayRate;
        return totalPay;
    }
}

void printEmployeeInfo(std::string &theEmployee, float &theHoursWorked, float &thePayRate, float &totalPay) {
    cout << "The employees name is: " << theEmployee << "\nThey worked a total of " << theHoursWorked << " hours.\nThey worked for a rate of " << thePayRate << " and earned a total of " << totalPay ;
}
int main() {
    std::string employee;
    float hoursWorked, hourlyPay;
    employeeInfo(employee, hoursWorked, hourlyPay);
    float total = employeePay(hoursWorked, hourlyPay);
    printEmployeeInfo(employee, hoursWorked, hourlyPay, total);
}
