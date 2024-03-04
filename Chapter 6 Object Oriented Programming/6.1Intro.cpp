#include <iostream>


using namespace std;

class rectangle { // this is how you create a class in c++
// by default, all variables are private which is why i made them  public
public:
    int length;
    int width;

    int area () {
        return length * width;
    }

    int perimeter(){
        return 2 * (length + width);
    }
};

int main() {

    rectangle r1; // this is how you create objects of a class just like creating or initializing an int

    r1.length = 10; // this is how you access members of a class
    r1.width = 5;

    cout << r1.area() << endl; // this is how you can call the methods of an object
    cout << r1.perimeter() << endl;

    return 0;
}