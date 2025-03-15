#include <iostream>
#include <map>
using namespace std;
#include "../Source/Core/database.h"
bool signup()
{
    string email;
    string password;
    cout << "-----SignUp proccess-----"<<endl;
    cout << "Enter email : ";
    cin >> email;

    if (usersDatabase.count(email) != 1)
    {
        cout << "Enter password : ";
        cin >> password;

        usersDatabase.insert({email, User{email, password}});
        cout << "\033[1;32m";
        cout << "You have successfully registered!" << endl;
        cout << "\033[0m";
        return true;
    }
    else
    {
        cout << "\033[1;31m";
        cout << "User with this email already exists!" << endl;
        cout << "\033[0m";
        return false;
    }
}