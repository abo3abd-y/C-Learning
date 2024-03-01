#include <iostream>

using namespace std;

int sum (int x, int y){
    return x + y;
}

float sum (float x, float y){
    return x + y;
} // this is called function overloading: this means that you can have two functions with the same name they have to either have different paramter data type or 
// their they must have different number of paramters

int sum (int x, int y, int z){
    return x + y + z;
}

int main() {

    cout << sum(10,5) << endl;

    cout << sum(2.4f,3.4f) << endl;

    cout << sum(10,20,30) << endl;

    // runs just fine with no problems

    

    return 0;
}