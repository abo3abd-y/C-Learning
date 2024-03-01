#include <iostream>
#include <string>

using namespace std;

int main() {

    string str = "hello"; // do not forget to include the string class

    cout << str << endl;

   
    cout << "Enter a string: " << endl;

    getline(cin, str); // this can store the multiple of words with multiple spaces and finish when the string ends with an ending character

    cout << str << endl;

    
    return 0;
}