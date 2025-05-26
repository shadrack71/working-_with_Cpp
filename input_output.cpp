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
void print_doc()
{

    // Create variables of different data types
    int items = 50;
    double cost_per_item = 9.99;
    double total_cost = items * cost_per_item;
    char currency = '$';

    // Print variables
    cout << "Number of items: " << items << "\n";
    cout << "Cost per item: " << cost_per_item << currency << "\n";
    cout << "Total cost = " << total_cost << currency << "\n";
}

int main()
{

    // cin >> myText >> age;
    // cout << " my name is " << myText << "\n" << age << endl;
    cout << " write your full name" << endl;
    std::getline(cin, fullName);
    cin >> age;

    cout << " my name is : " << fullName << " i am " << age << " old" << endl;

    cout << " your shopping  list" << endl;
    print_doc();

    return 0;
}