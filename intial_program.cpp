#include <iostream>

using namespace std;

// string userInput;

string name = "John";
int age = 35;
double height = 6.1;
const string nams = "shadrack";

int x = 5, y = 6, z = 50;

int myNumber{4};

void myfunction()
{
    cout << "  am working in the projecst" << endl;
}

int main()
{

    cout << " 4hello world3" << endl;
    cout << " 3hello world2" << endl;
    cout << " 5hello world1" << endl;
    // getline(std::cin, userInput);
    for (int i = 0; i < 10; i++)
    {
        cout << i << endl;
        // my name
    }

    cout << name << " is " << age << " years old and " << height << " feet tall.";
    // cout << userInput << endl;
    myfunction();

    return 0;
}
