#include <iostream>

using namespace std;

void swap (int &a, int &b){ // so a and b are just another "nickname" of x and y because we are using pass by reference
    int temp;

    temp = a; // pass the value located at that pointer

    a = b;

    b = temp;
} 

// it is not good idea to write a complex code such as loop in call by reference because that will mess things up and you will probablly get an error or something where 

// the compiler will convert your function to pass by address


int main() {

    int x = 10, y = 20;

    swap(x, y); // in pass by reference, we just pass the values but above in the function, we change those so that they have the apernads or whatever they are called 

    cout << x << " " << y << endl;

    return 0;
}