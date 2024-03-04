#include <iostream>

int & fun(int &x){
    // int x = 10; // this happens when the function had no arguments

    // return x; // same warning as before because we are not supposed to return the address of the local variable since it will be removed at the end of the function

    return x; //now this function returns a reference to a
}

int another_fun (int &x){
    x += 1;

    return x; 
}

using namespace std;

int main() {

    int a = 10;

    cout << fun(a) << endl;

    fun(a) = 25;

    cout << a << endl; // as you can see, this worked because we returned the reference to a and assigned 25 to it so that the value at that address will be changed to 25

    another_fun(a);

    // another_fun(a) = 1; // as you can see, we cannot do the same thing for another_fun(a) because another_fun is supposed to just return the value of the input but not the reference

    // so you cannot use the value returned by that function to change a because that value is a value and not a reference unlike fun.

    cout << a<< endl;
    return 0;
}