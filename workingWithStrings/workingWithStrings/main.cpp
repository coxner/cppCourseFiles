//
//  main.cpp
//  workingWithStrings
//
//  Created by Christian Oxner on 2022-06-23.
//

#include <iostream>
#include <string>
int main() {
    std::string s;
    //Accepts string from user
    std::cout << "Enter a String: ";
    std::getline(std::cin, s);
    //Prints users string back to them
    std::cout << "The string you entered is " << s << "\n" ;
    //prints length of string back to user
    std::cout << "The length of the string is " << s.length() << "\n" ;
    
    //Prints out the string one character at a time
    std::cout << "The characters of the string are: \n";
    for (int i = 0; i < s.length(); i++) {
        std::cout << s[i] << " " ;
    };
    //print out the string backwards
    std::cout << "\nThe characters of the string in reverse are: \n";
    for (int i = s.length(); i >= 0; i--) {
        std::cout << s[i] << " " ;
    };
    std::cout << "\n";
    int blank = 1;
    //counts the words in a sentence user enters by counting spaces
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == ' ') {
            blank++;
        }
    }
    std::cout << "There is " << blank << " words in the string you entered\n";
    
    std::string string1;
    std::string string2;
    
    std::cout << "We will now compare two strings to see if they are the same length!\nEnter string #1:";
    std::getline(std::cin, string1);
    std::cout << "Enter string #2:";
    std::getline(std::cin, string2);
    
    if(string1.length() == string2.length()) {
        std::cout << "Strings are equal in length";
    } else {
        std::cout << "Strings are not equal in length\n";
    }
    std::cout << "\n";
 // counts characters digits and special characters
    std::string charCount;
    int alpha, special, space, number = 0;
    std::cout << "Enter a string make it confusing:";
    std::getline(std::cin, charCount);
    
    for(int i = 0; i < charCount.size(); i++){
        if(charCount[i] >= 'A' && charCount[i] <= 'Z' || charCount[i] >= 'a' && charCount[i] <= 'z'){alpha++;} else if (charCount[i] >= '0' && charCount[i] <= '9'){
            number++;
        }else if (charCount[i] == ' ') {
            space++;
        }else {special++;}
    }
    std::cout << "The number of characters are: " << alpha << "\nThe number of digits are: " << number
    << "\nThe number of special characters are: " << special;
    
    //Exercise 9
}
