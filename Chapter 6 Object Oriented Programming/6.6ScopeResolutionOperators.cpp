#include <iostream>

using namespace std;

class Rectangle {

private:
    int length;

    int width;
public: // as you can see down below, we are defining the functions below but not implementing them; we will implement them using the scope resolution and this is how it is done; we define the functions outside the class
    //if the function is defined inside the class, we call that function inline function
    // some of the function i have defined here because they only require only one line of code to implement
    Rectangle();
    Rectangle(int l, int w);
    Rectangle(Rectangle &r);
    int getLength() {return length;};
    int getWidth() {return width;};
    void setLength(int l);
    void setWidth(int l);
    int area();
    int perimeter();
    bool isSquare();
    ~Rectangle();

};

// as you can see above, there are four types of functions: constructors, getters and setters, function that does stuff (area, perimeter), deconstructors


int main() {
    Rectangle r;

    cout << r.getLength() << endl;
    cout << r.getWidth() << endl;


    return 0;
}

Rectangle :: Rectangle() { // this is how you are supposed to use the scope resolution and this is how to implement the defined functions that were defined inside the class
    length = 1;
    width = 1;
}
Rectangle :: Rectangle(int l, int w) { // this is how you are supposed to use the scope resolution and this is how to implement the defined functions that were defined inside the class
    length = l;
    width = w;
}
Rectangle :: Rectangle(Rectangle &r) { // this is how you are supposed to use the scope resolution and this is how to implement the defined functions that were defined inside the class
    length = r.length;
    width = r.width;
}
void Rectangle:: setWidth(int w){
    if(w >= 0){
        width = w;
    }else{
        width = 1;
    }
}
void Rectangle:: setLength(int l){
    if(l >= 0){
        length = l;
    }else{
        length = 1;
    }
}
int Rectangle::area(){
    return length * width;
}
int Rectangle::perimeter (){
    return 2 * (length + width);
}
bool Rectangle :: isSquare () {
    return length == width;
}
Rectangle :: ~Rectangle(){
    cout << "Rectangle Destroyed." << endl; // when the program ends, the destructor is activated and will print this message
}