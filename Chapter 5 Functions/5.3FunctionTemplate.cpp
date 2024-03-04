#include <iostream>

using namespace std;

template <class T>
T max_x (T a, T b){
    return a > b ? a : b; // as you can see, we are using the template from class t (we named it t, you can name it whatever you want), which accepts any data type which might resolve function overloading
}
// int max (int a, int b) {
//     return a > b ? a : b; // this means if a is greater than b, then return a otherwise b
// }

// float max (float a, float b){
//     return a > b ? a : b; 
// }

// so we use the template in order to avoid  function overloading, which is bascially what it does: it accepts any sort of 


int main() {
    // sometimes, writing functions using function overloading means that we are repeating ourselves because we creating the same function twice with different data types which is why 
    // we are doing something different
    
    cout << max_x(12,14) << endl;

    cout << max_x(13.5, 13.4) << endl; // should work for both data types

    // this t function should work if both data types are the same and not different; if you have an int and a double, then the function should not work

    
    return 0;
}