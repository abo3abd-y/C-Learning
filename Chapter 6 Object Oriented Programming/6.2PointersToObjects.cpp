#include <iostream>

using namespace std;

class Rectangle {

public:
    int length;

    int width;

    int area () {
        return length * width;
    }

    int perimeter () {
        return 2 * (length + width);
    }
};

int main() {

    Rectangle r;


    Rectangle *p;

    p = &r;

    r.length = 10;

    p -> length = 15;

    cout << r.length << endl; // this is how pointers access the members of those objects using the -> arrow notation. So that is how we dereference things here

    p -> width = 5;

    cout << p -> area() << endl;

    // the following shows how you can create objects in the heap

    p = new Rectangle; // this is how we can create objects in the heap; notice that we do not need to put the paranthesis but you are more welcome to do that if you want

    p -> length = 15;

    p -> width = 10;

    cout << p -> length << endl;

    cout << p-> width  << endl;

    delete p;

    return 0;
}