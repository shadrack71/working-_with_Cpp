#include <iostream>
#include <string>

using namespace std;

int age2;

int age;                   // Integer (whole number)
float myFloatNum = 5.99;   // Floating point number
double myDoubleNum = 9.98; // Floating point number
char myLetter = 'D';       // Character
bool myBoolean = true;     // Boolean
string myText;
string myName;
string fullName;

int main()
{

    // cin >> myText >> age;
    // cout << " my name is " << myText << "\n" << age << endl;
    cout << " write your full name" << endl;
    std::getline(cin, fullName);
    cin >> age;

    cout << " my name is : " << fullName << " i am " << age << " old" << endl;

    return 0;
}