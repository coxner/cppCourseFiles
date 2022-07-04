//
//  main.cpp
//  functions
//
//  Created by Christian Oxner on 2022-06-23.
//

#include <iostream>
//Global functions declaration
//Decleration on a basic fuction accepts two parameters and subtracts one from the other
int subtraction_function(int parameter1,int parameter2 ){return( parameter1 - parameter2 );}

// Void function that accepts two int parameters and displays result
void printTime (int hour,int minute){
 std::cout << hour;
 std::cout <<":";
 std::cout << minute << std::endl;
}

//This is an example of a function that uses pointers
void ComparePointers(int* a,int* b)
{
  if(a == b)
  std::cout<<"Pointers are the same!"<<std::endl;
  else
  std::cout<<"Pointers are different!"<<std::endl;
}

//A function that prints out each individual value of an array
void printInt(int printable){
 std::cout <<"The int you passed in has value "<< printable << std::endl;
}

//Function that calls an array with a pointer
//Array can also be included as a argument with array_arg
void printIntArr(int*array_arg,int array_len){
  std::cout <<"The length of the array is "<< array_len << std::endl;
  // Loops through array values and displays them
  for(int i =0; i < array_len; i++)
  std::cout <<"Array["<< i <<"] = "<< array_arg[i]<< std::endl;
}

//Example of Swap by reference with the use of &
void swap (int& x,int& y)
{
  int temp = x;
  x = y;
  y = temp;
}

int main() {
    //Calls subtraction_function and creates two new variables for relation
    int argument1 =4;
    int argument2 =3;
    // One example of how to store value of function in a variable passes arguments arg1 and arg2
    int result = subtraction_function( argument1, argument2 );
    // Additional example on how to store the value of a function passes arguments 4, 3
    result = subtraction_function(4,3);
    //Displays the result of the function
    std::cout << "This is the subtraction_function\n" << result << std::endl;
    
    // Calls prinTime function and initalizes the first two arguments
    int hour =11;
    int minute =59;
    std::cout << "\nThis is the printTime function\n";
    printTime( hour, minute );
    
    //Calls ComparePointers
    int i, j;
    int& r = i;
    std::cout <<"\n";
    ComparePointers(&i,&i);
    ComparePointers(&i,&j);
    ComparePointers(&i,&r);
    ComparePointers(&j,&r);
    
    //Creating an array to be used with the printInt function
    // Initalizes array to hold 5 values
    std::cout << "\nThis is the printInt function used to display values of my_array\n";
    int my_array[5];

    // Reminder: always initialize your array values!
    for(int i =0; i <5; i++)
     my_array[i]= i *2;
    //Loop calling forInt cuntion to print each value of the arrayr
    for(int i =0; i <5; i++)
     printInt(my_array[i]);// <-- We pass in a dereferenced array element
    
    //Calls the printIntArr function
    printIntArr(my_array,5);
    
    //Used with the swap function without the use of & this function would produce an error
    int a =7;
    int b =9;
    swap (a, b);
    std::cout << a <<' '<< b << std::endl;
    
    }
    

