#include <iostream>

using namespace std;

int main() {

    int a[10] = {1,2,3,4,5,6,7,8,9,10}; //this is how you can create a list

    int z[] = {1,2,3,4}; //as you can, we do not have to specify the size of the array as you can see and c++ will know that you have created an array using an empty bracket []

    int b[5]; //can declare an uninitilized list

    int c[5] = {2,3}; //rest of the values will be filled with zeros

    // so four ways to create arrays

    cout << a[3] << endl; // this is how you can access elements in an array


    cout << a << endl; //this should print the address of the first element

    // notice that those arrays you create, they stay the same size and you cannot change them


    for(int x: a){ // kinda like python. you could also do auto x so that you do not have to specify the type of the array iterator and this is useful when you do not know anything about the arrya
        cout << x << endl;
    }
    // the for loop read " for each x in a"
    // x is a copy of the value in x
    for(int &x : a){
        cout << ++x<< endl; // play around with this; there is a difference between putting the ++ on the right of x and the left of x
    }

     for(int x: a){ // the values have changed as you can see because in the previous loop, we used a reference that references those memory addresses and actually changed the values in the loop
        cout << x << endl;
    }

    return 0;
}