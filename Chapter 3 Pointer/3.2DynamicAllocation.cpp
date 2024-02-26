#include <iostream>

using namespace std;

int main() {

    int *p = new int[5];

    p[0] = 12;
    p[1] = 13;

    cout << p[1] << endl;

    // p = NULL; //will not longer point to the list

    delete []p;

    p = nullptr; // same thing


    int size;

    

    int *q = new int[20];


    delete []p;
    p = new int[40];


    return 0;
}