#include <iostream>

using namespace std;

// int add (int x, int y){
//     return x + y;
// }

int add (int x, int y, int z = 0){ // as you can see, we assigned a default value to z so that if we just provided just two arguments when calling it, it will default z to 0 and z becomes optional
    return x + y + z;
}

// another thing: if we wanted to present a default argument, we must start writing the default values from right to left, and not skipping anything. Ex: x,y,z = 0,b = 0

// and not x = 0,y,z = 0,b = 0 and this won't work because it does not go from right to left


int main() {

    cout << add(1,2) << endl;

    cout << add(1,2, 3) << endl; // as you can see, it uses the same function and applies the default argument if we do not provide the third argument

    
    return 0;
}