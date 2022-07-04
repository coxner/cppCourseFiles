//
//  main.cpp
//  loopExamples
//
//  Created by Christian Oxner on 2022-07-02.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int counter, first, last, next;
     first = 1; last = 2;

     for (counter = first; counter <= last; counter++) {
       cout << "\n " << counter;
       next = counter * counter;
       cout << " " << next;
     }

     counter = first;
     while (counter <= last) {
       cout << "\n " << counter;
       next = counter * counter;
       cout << " " << next;
       counter++;
     }

     do {
       cout << "\n " << counter;
       next = counter * counter;
       cout << " " << next;
       counter++;
     } while (counter < last);
}
