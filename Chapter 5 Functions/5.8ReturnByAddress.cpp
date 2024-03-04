#include <iostream>

using namespace std;
int * fun () {
    // int x = 10;
    // return &x; // not good because at the end of the function, c++ clears the values of the local variables in the stack

    int *p = new int [5];

    for (int i =0 ; i < 5 ; i++){
        p[i] = 5 + i;
    }
    cout << p << endl; // this will be the address of the first value in the list in the heap
    return p; // this returns the address of the first value of the list in the heap; this is ok because the function does not clear any values in the heap, only in the stack
}
int main() {

    int *q = fun();

    cout << q << endl; // this will be the same address as the one above as you can see
    for(int i = 0 ; i < 5; i ++){
        cout << q[i] << endl;
    }

    return 0;
}