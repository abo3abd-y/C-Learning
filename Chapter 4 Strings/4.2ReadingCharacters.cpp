#include <iostream>

using namespace std;

int main() {

    char a[20];

    cout << "What is your name:" << endl;

    cin >> a;

    cout << a << endl; // this will automatically add a null charactyer at the end of the name

    // problem with this is that it will only take one word without spaces. Solution is written below
    char b[20];

    cin.ignore(); //see it works perfectly when we use cin.ignore because it ignores the ending chatacter

    cout << "What is your name: " << endl;

    cin.get(b, 20); //it will take a maximum of 50 characters and ignore the rest of the characters (again it is technically 49 characters when counting for the null character)
    //cin.getline(a,50);
    // the difference between getline and get is that get basically when you hit the word enter, it will go the second line but that word enter is equivalent to '\n' and the second

    // list will store that keyword. To solve this, we use the word cin.ignore to ignore \n or just use cin.getline()

    // the above code might not work because it might expect a list that is empty then it will work
    cout << b << endl;

    return 0;
}