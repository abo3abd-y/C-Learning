#include <iostream>
#include <string>

using namespace std;

int main() {    
    string hello = "bye";

    hello.append(" world"); // adds a certain string to the end of the string that we have here

    cout << hello << endl;

    hello.insert(7, "kk"); // this will insert two characters in the specified index but it won't replace those characters that those characters will add and instead it will just move them away


    cout << hello << endl; 


    hello.insert(2, "apple", 2); //this i want the first two characters from the word apple and replacing it with the second index of the hello string. It does not replace but more like adding

    cout << hello << endl;

    hello = "hello world";

    hello.replace(3,4, "kk"); // this means that go to the third index and replace that and the next five characters with the character "kk"

    cout << hello << endl;

    hello.erase(); // basically just like clear()

    cout << hello << endl;

    hello = "hello world";

    hello.push_back('a'); // pushes a single character to the end of the string

    cout << hello << endl;

    hello.pop_back(); // removes a character from the end of the string

    cout << hello << endl;

    string another_hello = "world hello";

    hello.swap(another_hello); // just swaps the two string together given that you have two strings

    cout << hello << " " << another_hello << endl;

    for(unsigned int i = 0 ; i < hello.size() ; i ++ ){ // that is how you can iterate through the function, just like that
        cout << hello[i] << " ";
    }

    cout << hello.size() << endl; // remember this does not include the terminating character

    string testing = "WlCoMwPqLaofgjperwjfgJaKfweKd";

    for(unsigned int i = 0 ; i < testing.size(); i ++){
        if(int(testing[i]) >= 97 & int(testing[i]) <= 122 )
            testing[i] = char(int(testing[i] - 32));
    } // this code above basically returns the character capitalized

    cout << testing << endl;


    string email = "poopyDots112@gmail.com";

    int index = email.find("@"); // finds the index of the character in a string that correspond to that character

    string username = email.substr(0, index); // gives us a substring of a character from a certain a beginning index and then it will include the index characters after it

    // so the substring includes the starting index and includes the second parameter which adds includes that second index's number of characters

    cout << username << endl;
    return 0;
}