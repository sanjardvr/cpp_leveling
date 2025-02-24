#include <iostream>
#include <map>
using namespace std;

void signup()
{
    string email;
    int password;
    map<string, int> users = {{"admin@example.com", 12345678}};
    cout << "Enter email : ";
    cin >> email;

    if (users.count(email) != 1)
    {
        cout << "Enter password : ";
        cin >> password;
        users.insert({email, password});
    }
    else
    {
        cout << "\033[1;31m";
        cout << "User with this email already exists!";
        cout << "\033[0m";
    }
}