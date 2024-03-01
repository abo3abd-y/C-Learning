#include <iostream>
#include <cmath>
using namespace std;

int main() {

    // here, we are assuming that the binary search is in sorted order
    cout << "What is the number you are looking for?" << endl;
    int target = 0;
    cin >> target;
   
    int a[] = {6,8,13,17,20,22,25,28,30,55};

    int left = 0; //index of the left half of the array


    int right = sizeof(a)/sizeof(int) - 1; //index of the right half of the array

    int middle;
    while (left <= right){
        middle = floor((left + right)/2); //finds the midpoint

        if(a[middle] < target){ //if target is still bigger than, we checking the right half
            left = middle + 1;
        }else if (a[middle] > target){ //otherwise we check the left half
            right = middle - 1;
        }else{ //we found the key
            break;
        }
    }
    
    if(left <= right){
        cout << "The target's index is at " << middle << endl;
    }else{
        cout << "The number is non-existant" << endl;
    }


    return 0;
}