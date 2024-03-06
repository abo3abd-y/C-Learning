#include <iostream>

using namespace std;

class Rectangle {

private: // we made these data as private so that they canonot be accessed by other careless users and altered by them
    int length;

    int width;
public: // we made these data public so that they can be accessed by the user but not changed by them

    void setLength (int l){ // these functions are for setting the values and those are called setters
        if(l >= 0){ // this ensures that the length that we have is positive and not negative otherwise it will set it equal to zero
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

    Rectangle r;

    // r.length; // cannot do such a thing

    // we can do such a thing by defining functions and using them


    r.setLength(10); // we are using the setters to use those functions to set our data type

    r.setWidth(10); // same thing as above

    cout << r.area() << endl; // now we calculate the area

    cout << r.getLength() << endl;

    r.test(100); // as you can see, we are allowed to use functions defined inside the class in another functions that are also defined inside the class

    cout << r.getWidth() << endl;
    return 0;
}