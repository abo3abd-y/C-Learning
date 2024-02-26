#include <iostream>

using namespace std;

int main() {
    int x = 10;

    int *p; //this is how you can declare empty pointers, where it has an address but it does not store any address. We declare pointers using *

    p = &x; // now we store the address of x to p, so that p now points to x storing the address of x

    cout << x << endl;

    cout << &x << endl;

    cout << p << endl;

    cout << &p << endl;

    cout << *p << endl;

    // you will notice that p itself is storing the address of x. BUT, p itself has a different address pointing to the address of x

    // at the end, we "derefernce" the data at p so that we can see the actual data that the pointer is pointing to.

    int *q = new int[5]; //in here we are creating a pointer integer list in the heap and not the stack. remember, everything you create goes to the stack, otherwise it goes to the heap using the new character

    // in the above code, we basically create a pointer in the stack and then it points to the list in the heap

    cout << q << endl;

    cout << &q << endl;

    delete []q; //this is how you delete the data in in the heap

    cout << q << endl; // you might realize that q still points to the heap, but the data it is pointing to is deleted

    cout << &q << endl; 

    q = NULL;

    // now q is not pointing anywhere
    cout << q << endl;

    cout << &q << endl; //it still keeps its memory though

    //however, if you null your q before deleting your data in the heap, that data is lost forever there and cannot access. It also means that you have data in the heap unused and cannot access it.

    // this is called a memory leack problem

    // always deallocate your data in the heap when do not want it.


    // stack vs heap: stack will delete everything after it goes out of the scope, but heap memory stays on as long as the program does not die and as long as you do not manually delete it


    // always

    q = new int[5];

    q[2] = 15;

    cout << q[2] << endl;

    delete []q;

    
    return 0;
}