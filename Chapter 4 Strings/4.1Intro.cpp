#include <iostream>

using namespace std;

int main() {

    char a[10] = "abcdefghi";

    // as you can see from above, storing a list of charracters is like creating a string. Notice that the last character in the character list

    // is an ending character '\0'  which means that if you have a list of 10 characters, you can only store up to 9 characters and not 10 as previouly thought

    cout << a << endl;

    char b[] = {'h', 'e' , 'l', 'l', 'o', '\0'};

    // as you can see above, this time we have a list of characters ending with the terminating character, making it a string

    cout << b << endl;

    char c[] ={'h', 'e' , 'l', 'l', 'o'};

    // without the terminating character, it won't be a string and any value after the ending character will not result in some garbage data if it was some real string

    // as you will see below in the cout statement, we will see that hello was printed twice because there was no ending character at end of the list given above

    cout << c << endl;

    char d[] = {65,66,67,68,'\0'};

    // as you can see above, we are storing the character or strintg abcd as an ascii table character

    cout << d << endl;

    char *e = "hello"; //this will store hello in the heap using a pointer

    // the above character is going to be a warning because it is not good to initialize a pointer with a character

    cout << e << endl;

    char f[] = {'h', 'e' , 'l', 'l', 'o', '\0', 'p', 'p'};

    cout << f << endl; // this will only print the things up to the null character

    cout << f[6] << endl; //this will print the 7th character and will display it

    // main point: null character is needed to know where is the string ending instead of looping over it



    
    return 0;
}