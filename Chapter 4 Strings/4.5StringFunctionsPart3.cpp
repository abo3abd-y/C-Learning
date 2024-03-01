#include <iostream>
#include <cstring>
using namespace std;

int main() {


    char s1[10] = "235";
    char s2[10] = "54.78";

    long int x = strtol(s1, NULL, 10); // for some reason this is not working; it basically converts a string to a long int. We are passing a second argument as NULL with a third paramter called 10 which means that we are using a deicmal number system
    float y = strtof(s2, NULL); // this is supposed to convert a string to a float with a second paramter of NULL
    cout << x << endl;
    cout << y << endl;

    char s3[30] = "x=10;y=35;z=100";

    cout << strtok(s3, "=;") << endl; // this basically removes the delimeter and prints the string without the delimeters that we have.

    // if you want to do this repeadetly for all the declarations that we have in the string, we can do a loop

    strcpy(s3, "x=10;y=35;z=100");

    char *token = strtok(s3, "=;");

    while (token != NULL){ // now it should work fine here
        cout << token << endl;
        token = strtok(NULL, "=;"); // we are doing the same thing again for the other declarations
        // ok we are doing NULL because we already told them before that we wanted to do it with s3, so it kinda memorized it already 

        // you can see above that we are putting two delimters in the string which means that we want the string to be seperated by the two charaters shown. So even if you had ";=" you would get the same answer
        
    }
    return 0;
}