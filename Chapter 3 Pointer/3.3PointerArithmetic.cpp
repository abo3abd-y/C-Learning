#include <iostream>

using namespace std;

int main() {


    int a[5] = {1,2,3,4,5};

    int *p = a; // now p points to the address of the beginning elemenet of the list a

    cout << *p << endl;

    p ++; //this basically means move to the next iteration and NOT add 1 to the element in the beginning of the list

    cout << *p << endl;

    p --;

    p = p + 2;

    cout << *p << endl;

    p -= 2;

    int *q = &a[3];

    cout << q - p << endl; // this tells us the address difference between the two pointers

    // those are the only operations you can perform on the points: + or -

    cout << p + 9 << endl; //as you can see, pointers can also access memory of elements where they are not supposed to access

    p += 3;

    cout << p[-3] << endl; // you get back to the beginning of the array using negative indexing

    p -= 3;

    for(int i = 0; i < 5 ; i ++ ){
        cout << i[a] << endl; //this is equivalent to *(i + a) which is explained below
    }

     for(int i = 0; i < 5 ; i ++ ){
        cout << *(i + a) << endl; //this is because it would add the integer at the adress of the beginning of the array and then add it with i and then dereferncing it. Without the star, this would give us the addresses of those operations

    }

    for(int i = 0; i < 5 ; i ++ ){
        cout << i[p] << endl; //this is equivalent to *(i + p) which is explained below
    }

     for(int i = 0; i < 5 ; i ++ ){
        cout << *(p + i) << endl; //same as above. NOTICE: p still points to the beginning of the array and it is not moving anywhere


    }


    



    return 0;
}