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

    Rectangle (int l = 0, int r = 0) { // constructor with paramters. as you can see, if i initialize the constructors, then we won't need the constructor above so i will comment it out
        setLength(l);
        setWidth(r);
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

    Rectangle a;
    Rectangle b(10,15);

    Rectangle c(b); // as you can see, we are using the copy constructor to copy the value of b over to the new c

    cout << a.getLength() << endl; // constructor with no paramters will be printed to the counsel

    cout << a.getWidth() << endl;

    cout << b.getLength() << endl; // constructor with paramters provided and will be printed to the counsel

    cout << b.getWidth() << endl;

    cout << c.getLength() << endl; // using the copy constructor, we are now supposed to get the same values as b since we used a copy constructor to copy the values of b to the c

    cout << c.getWidth() << endl;
    return 0;
}