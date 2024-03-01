#include <iostream>

using namespace std;

int main() {

    int counter = 0;

    for (int i = 0; i < 4; i ++ ){
        for(int j = 0 ; j < 4  ; j ++ ){
            if(j <= counter){
                cout << "* ";
            }
        }
        counter ++;
        cout << endl;
    }
    // the above code should just display a pattern
    return 0;
}