#include <iostream>

using namespace std;

int main() {

    int a[2][3] = {{2,5,9}, {6,9,15}}; // this says 2 rows and 3 columns
    int b[2][3] = {2,5,9 , 6,9,15}; // you could also create two d arrays by just putting them togther (not recommended)

    for(int i = 0 ; i < 2; i ++){ // you can think of i as rows and j as columns
        for(int j = 0; j < 3; j ++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    int x[2][3];

    for (auto &i : x){ // need to use this syntax exactly. This gives us the the first row of the problem
        for (auto &j : i){//this is just like goiing over a first dimensinal array
            cin >> j; //this is a reference, what you change in y changes in x[i][j]
        } 
    }

    for (auto &i : x){
        for(auto &j : i){
            cout << j << " ";
        }
        cout << endl;
    }

    

    return 0;
}