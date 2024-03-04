#include <iostream>

using namespace std;

void fun(){

    static int s = 10; // what is static; they are just like global variables except they can only be accessed within specified functions; which means when the function

    // ends, the function won't delete them but will be kept in memory

    // they will be deleted only when the program ends

    s++;

    cout << s << endl;
}

int main() {

    fun();

    fun();

    fun();

    // for example, s cannot be accessed in the main function 

    return 0;
}