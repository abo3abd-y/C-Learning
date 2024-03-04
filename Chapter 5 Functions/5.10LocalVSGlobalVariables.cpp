#include <iostream>


using namespace std;

int g = 5; // global variable: can be accessed everywhere by everyone

void fun () {
    int g = 10;

    {
        int g = 0;
        g ++; // so in c++, we look the current scope for the variable, and if we could not find it, we go outwards and look for it, and more outwards until we find it or we do not
        // so it will use the g variable that is defined in this scope here
        cout << g << endl;
    }
    g ++; // same concept as above
    cout <<g << endl;
}

int main() {
    cout << g << endl; //which g should it print; of course the outer one because those g's inside the function fun are deleted after the function ended

    fun();

    cout << g << endl; // the global g has not changed because of the fact that the compiler checks for the nearest g when it needs to


    // in general, best to not use same name variables to avoid confusion

    int g = 100;

    cout << g << endl; // print 100

    cout << ::g << endl; // :: grabs the global variable g
    return 0;
}