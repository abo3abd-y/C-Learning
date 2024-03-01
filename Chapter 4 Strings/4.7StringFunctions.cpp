#include <iostream>
#include <string>
using namespace std;

int main() {

    string hello = "hello";

    cout << hello.length() << endl; // should print 5 characters
    cout << hello.size() << endl; //same thing as above
    cout << hello.capacity() << endl; // the capacity is the size of the string and if you exceed the capacity, the string will be resized like a dynamic array
    cout << hello.max_size() << endl; //this will show how many a characters a string can have in this compiler
    hello.clear(); //clears the string

    cout << hello.empty() << endl; // this will return 1 if the string is in fact empty and otherwise it will return false or 0

    
    return 0;
}