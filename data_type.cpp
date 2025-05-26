#include <iostream>
#include <string>
#include <limits>
using namespace std;

int myNum = 5;             // Integer (whole number)
float myFloatNum = 5.99;   // Floating point number
double myDoubleNum = 9.98; // Floating point number
char myLetter = 'D';       // Character
bool myBoolean = true;     // Boolean
string myText = "Hello";

void IntegerModifiers()
{
    signed int myFod = 123;
    short int shortNum = 32767;                      // Max value for short
    unsigned int unsignedNum = 4294967295;           // Max value for unsigned int
    long int longNum = 2147483647;                   // Max value for long
    long long int longLongNum = 9223372036854775807; // Max for long long

    std::cout << "Short int: " << shortNum << " (Size: " << sizeof(shortNum) << " bytes)" << std::endl;
    std::cout << "Unsigned int: " << unsignedNum << " (Size: " << sizeof(unsignedNum) << " bytes)" << std::endl;
    std::cout << "Long int: " << longNum << " (Size: " << sizeof(longNum) << " bytes)" << std::endl;
    std::cout << "Long long int: " << longLongNum << " (Size: " << sizeof(longLongNum) << " bytes)" << std::endl;
}

int main()
{

    cout << sizeof(myNum) << endl;
    IntegerModifiers();

    return 0;
}