//
//  main.cpp
//  enumerators
//
//  Created by Christian Oxner on 2022-07-01.
//

#include <iostream>

int main() {
    // Enemerator created
    enum Color { red, green, blue };
    Color r = red;
    switch(r)
    {
        case red :std::cout<<"red\n";break;
        case green:std::cout<<"green\n";break;
        case blue :std::cout<<"blue\n";break;
    }
    // by default enum start at 0 and always increment +1 from previous variable value if no value is given
    enum Foo { a, b, c =10, d, e =1, f, g = f + c };
    //a = 0, b = 1, c = 10, d = 11, e = 1, f = 2, g = 12
}
