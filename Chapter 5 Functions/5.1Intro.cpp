#include <iostream>

using namespace std;

void display () { // void means that the function is not returning any value and empty paranthesis means that the function does not take any arguments
    cout << "hello" << endl;
}

float add (float x, float y){ // function returns a float and accepts two flaots as an argument list
    float z = x + y;

    return z;
}
// after the function ends, the memory that was used by the function from function declarations and all that will be cleared from the stack

// meanwhile , the memory in the main function will not be cleared and only be cleared when the program ends


int main() {

    display();

    cout << add(2.0,3.0) << endl;
    return 0;
}