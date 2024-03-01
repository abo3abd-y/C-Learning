#include <iostream>
#include <cstring> //this is added for  the built in functions
using namespace std;

int main() {

    char a[] = "hello";

    cout << strlen(a) << endl; //notice that it does not include the ending character

    char *s;

    cout << "Enter a word for a string :";
    // cin >> s;

    cout << strlen(s) << endl; //it is not working for some reason, maybe because the c++ version that im using right now is updated or something

    char s1[20] = "Good";
    char s2[10] = "Morning";

    strcat(s1,s2); //combines s1 with s2 storing the result in s1

    cout << s1 << endl;
    cout << strncat(s1,s2,3) << endl; //this copies the first three characters of s2 back into s1 and print the result

    char s3[20] = "Good";
    char s4[10] = "";

    strcpy(s4,s3); //copies s3 into s4

    cout << s4 << endl;
    
    char s5[10] = "";
    strncpy(s5,s3, 2); //copies the first two characters in s3 into s4

    cout << s5 << endl;

    
    return 0;
}