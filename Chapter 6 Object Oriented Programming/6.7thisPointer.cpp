#include <iostream>

using namespace std;

class Rectangle {

private: 
    int length;

    int width;
public: 


    // Rectangle () { // when an object with no paramters provided, then the following will happen
    //     length = 0;
    //     width = 0;
    // }

    Rectangle (int length = 0, int width = 0) { // constructor with paramters. as you can see, if i initialize the constructors, then we won't need the constructor above so i will comment it out
        this -> length = length; // this keyword is a pointer to the current class and is used when the paramters are of the same name as the members of the class and used to solve ambiguity
        this -> width = width;
    }

    Rectangle (Rectangle &r) { // this is called a copy constructor because we are copying the contents of a referenced rectangle within this new object
        length = r.length;
        width = r.width;
    }


    void setLength (int l){ 
        if(l >= 0){ 
            length = l;
        }else{
            length = 0;
        }
    }

    void setWidth (int w){
        if(w >= 0){ 
            width = w;
        }else{
            width = 0;
        }
        

    }

    int getLength () {
        return length;
    }

    int getWidth (){ 
        return width;
    }

    int area () {
        return length * width;
    }

    int perimeter () {
        return 2 * (length + width);
    }

    void test (int l){
        setWidth(l);
    }
};

int main() {

    Rectangle r(5,5);

    cout << r.area() << endl; // should print 25 at this moment

    return 0;
}