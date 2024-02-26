#include <iostream>

using namespace std;

int main() {

    int x = 10;

    int &y = x; // we basically store the address of x in y and it is NOT a pointer. y is an alias for x. You change y, you change x and vice versa

    // difference between rvalue and lvalue: when you put a varibale on the right side of something such as a = x, here, we are assigning only the value of x over to a

    //but when the variblae is on the  left side of the equation, like x =25, we are saying we should go to the memory address and change x. (lvalue). So rvalue is value an lvalue is memory

    int z = 20;

    // &y = z; //cannot do this because y is already assigned to the address of x, basically a constant. Its address cannot be changed but its value can

    // notice, that the size of a pointer is independent of its data type; the pointer of a string is of the same size as the pointer of a bool

    cout << x << endl;

    cout << y << endl;

    x ++;

    cout << x << endl;

    cout << y << endl; // as you can see, this is different from just saying int y = x, in that with int y =x, we are just copying over the value of x so that both have complete different memory address

    cout << &x << endl;
    cout << &y << endl; //see, both have the same memory addresses
    return 0;
}