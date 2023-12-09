#include <iostream>

using namespace std;


int main(){

    double test_double = 3.2;

    int test_int = 3;

    cout << static_cast<int> (test_double) << endl; //in here, the statc_cast is used which is part of c++; it follows the form: static_cast<the type you want to convert to> (the value or variable)

    cout<< static_cast<double> (test_int) << endl;

    //output: should be 3 and 3

    //might noticed that when converting to a double, it prints 3 instead of 3.0 because we still have no yet learned how to output decimal numbers that have 0 as the decimal


    char test_char = 'A';

    cout << static_cast<int> (test_char) << endl; //converts test_char to the asci table related value

    cout << static_cast<char> (test_int) << endl; //converts the integer to whatever character maps in the ascii table

    return 0;
}