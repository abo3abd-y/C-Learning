#include <iostream>

using namespace std;

class test {


    int a;

    int *b;

    test (int x){
        a = x;

        b = new int[a];
    }

    test (test &ia){
        a = ia.a;

        // b = ia.b; // however, this is wrong because now the constructor's b is pointing to the other constructor's list in the heap

        b = new int[a]; // that is called a deep copy constructor : everything is copied over

        // you can even copy the values of the old constructor to the new constructor using a loop or something but we won't do it here
    }
};  

int main() {

    test a(12);

    test b(&a);

    cout << a.a << endl;

    cout << b.a << endl; // should be the same, but their lists in the heap must be different in that they are lists in different addresses

    return 0;
}