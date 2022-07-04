//
//  main.cpp
//  multiDemensionalArrays
//
//  Created by Christian Oxner on 2022-06-29.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    string animals [2][3] = {
        {"fox", "dog", "cat"},
        {"mouse", "squirel", "parrot" }
    };
    // 2 rows in outer array
    for(int i = 0; i < 2; i++){
        // iterates inner array
        for(int j = 0; j < 3; j++) {
            //outer array known as row then inner array values or columns
            cout << animals[i][j] << " " << flush;
        }
        cout << endl;
    }
}
