#include <iostream>
#include <cstring>

using namespace std;

int main() {

    char s[20] = "programming";
    char s1[20] = "gram";

    cout << strstr(s,s1) << endl; //it sees if the substring s1 is in s and after that it will print the word starting from the substring until the end of the string in s

    // otherwise if the substring does not exist, then it will return an error or return NULL

    char s2[20] = "k";

    if(strstr(s,s2) != NULL)
        cout << strstr(s,s1) << endl;
    else
        cout << "Returned a NULL" << endl;

    cout << strchr(s, 'g') << endl; // same thing like strstr except this time we are checking if one character exists in the string or not and if it does, it will do the same thing as strstr

    cout << strrchr(s, 'g') << endl; // same thing as the one above but this time it start on the right-hand side and check to see if it is there or not and if it is, then print everything to the right of it


    return 0;
}