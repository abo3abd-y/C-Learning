#include <iostream>

using namespace std;

// pass by value is the thing that we have been dealing with since the start of this chapter

// pass by value just passes the value, and nothing else

void swap (int a, int b){
    int temp = a;

    a =b;
    b = temp;


}


int main() {

    int x = 10, y = 20;

    swap(x,y);

    cout << x << " "  << y << endl; // this did not work, why? because we used pass by value which means that we did not actually change the value at the locations of those variables

    
    return 0;
}