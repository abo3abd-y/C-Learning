#include <iostream>

using namespace std;

int main() {

    // 1. Uninitialized Pointer

    int *p;

    // *p = 25;

    // this is not good because right now the pointer is not pointing anywhere, and it could be pointing to some garbage memory. NOT good.

    cout << p << endl; //garbage memory address

    cout << &p << endl;

    cout << *p << endl; //garbage


    // 1.1: How to initialize pointer

    // 1.1.1: You can use a previously defined variable

    int x = 2;

    p = &x; // that is ok

    // 1.1.2: You can manually write the address of something into the pointer. Nobody almost uses this.

    // 1.1.3: Finally, you could dynamically allocate some memory in the heap for your pointer

    p = new int[2];

    cout << p << endl; //this is the address of your heap in the memory

    // 2: Memory Leak

    int *q = new int[7];

    delete []q; // DO NOT forget this, otherwise you will get a memory leak

    q = nullptr; // now q will no longer point to that array in the heap and you have forever lost it

    q = 0; // they are all the same

    q = NULL; // they are all the same


    // 3: Dangling pointer

    // This happens, for example, when you have a pointer in the main functino and pass that pointer another function which deletes that data in the heap.

    // then when you come back to dereference the old pointer, this will cause an error.






    return 0;
}