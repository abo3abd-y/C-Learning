#include <iostream>

using namespace std;

int max_m(int x, int y){
    return x > y ? x : y;
}

int min_m(int x, int y){
    return x < y ? x : y;
}

int main() {

    int (*fp) (int,int); // so we declared a function pointer to a function that accepts two integer perimeters and returns an integer

    fp = max_m; // we store the address of max_m in fp
    cout << (*fp) (10,5) << endl;

    (*fp)(10,5);

    fp = min_m; // we change the pointer so that now the pointer now points to the minimum value min_m

    cout << (*fp) (10,5) << endl;

    (*fp) (10,5);



    return 0;
}