#include <iostream>

using namespace std;

template <class T>
T max (T a, T b){
    return a > b ? a : b; // as you can see, we are using the template from class t (we named it t, you can name it whatever you want), which accepts any data type which might resolve function overloading
}
// int max (int a, int b) {
//     return a > b ? a : b; // this means if a is greater than b, then return a otherwise b
// }

// float max (float a, float b){
//     return a > b ? a : b; 
// }


int main() {
    // sometimes, writing functions using function overloading means that we are repeating ourselves because we creating the same function twice with different data types which is why 
    // we are doing something different
    
    cout << max(12,14) << endl;
    return 0;
}