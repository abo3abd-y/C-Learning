#include <iostream>

using namespace std;

struct demo {
    int x;
    int y;
    void display () {
        cout << x << " " <<  y << endl;
    }
};

// difference between struct and classes: the only difference between the two is that struct by default is public and the class by default is private

int main() {
    demo d;
    d.x = 10;
    d.y = 20;
    d.display();

    return 0;
}