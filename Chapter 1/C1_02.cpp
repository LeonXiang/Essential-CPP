
// Á·Ï°1.5

#include <iostream>
#include <string>
using namespace std;


int main()
{
    string first_name;
    string last_name;

    cout << "Please enter your first name: ";
    getline(cin, first_name);
    while (first_name.size() < 2)
    {
        cout << "Your input is invalid! Please input a first name with over 2 characters!" << endl;
        cout << "Please enter your first name again: ";
        getline(cin, first_name);
    }
    cout << "\nHello, " << first_name << ", Please enter your last name: ";
    getline(cin, last_name);
    while (last_name.size() < 2)
    {
        cout << "Your input is invalid! Please input a last name with over 2 characters!" << endl;
        cout << "Please enter your last name again: ";
        getline(cin, last_name);
    }
    cout << "\nHello, " << first_name << " " << last_name << "... and goodbye!" << endl;
    cin.get(); 

    return 0;
}
