#include <iostream>

using namespace std;

void swap (int *a, int * b){
    int temp;

    temp = *a; // pass the value located at that pointer

    *a = *b;

    *b = temp;
} // this should work perfectly because we are using pointer and swapping their values acutally changew the values at those addresses

// that is the power of pass by address because it allows you to access the address of those variables passed to the function

int main() {
    int x = 10, y = 20;

    swap(&x, &y); // we pass the adresses and not the actual values

    cout << x << " " << y << endl;


    return 0;
}