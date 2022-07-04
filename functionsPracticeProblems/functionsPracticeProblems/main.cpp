//
//  main.cpp
//  functionsPracticeProblems
//
//  Created by Christian Oxner on 2022-06-23.
//

#include <iostream>

void programDescription() {
    std::cout << "This program requires user to enter a +, -, /, *, % or ** symbol to\ndetermine what caculation should be perform. Once the user enters a\nopperand the program will then require the user to enter two numbers\nto perform the caculation the user has chosen \n\n";
}

void userSum(std::string& opperand, int& num1, int& num2) {
    int sum;
    if (opperand == "+") {
        sum = num1 + num2;
    } else if (opperand == "-") {
        sum = num1 - num2 ;
    } else if (opperand == "/") {
        sum = num1 / num2 ;
    } else if (opperand == "*") {
        sum = num1 * num2;
    } else if (opperand == "%") {
        sum = num1 % num2 ;
    } else {
        std::cout << "You did not enter a valid opperand";
    }
    std::cout << sum << std::endl;
}

int main() {
    //output program description to user
    programDescription();
    int c;
    std::cout << c % 2;
    // variable decleration
    int x,y ;
    std::string s;
    //accepts opperand and two numbers from the user
    std::cout << "Enter the opperand you wish to use: ";
    std::cin >> s ;
    std::cout << "Enter the first number: ";
    std::cin >> x;
    std::cout << "Enter the second number: ";
    std::cin >> y;
    //calls the user sum function to execute
    userSum(s, x, y);
    
    char a[] = {'a', 'b', 'c', 'd'};
    char b[] = {'a', 'b', 'c', 'd', '\0'};
    std::cout << a << "\n" << b;
}
