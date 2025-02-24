#include <iostream>
#include <map>
using namespace std;
#include "../Source/Core/database.h"
bool login()
{
    string email;
    string password;
    cout << "Enter email : ";
    cin >> email;

    if (usersDatabase.count(email) != 0)
    {
        cout << "Enter password : ";
        cin >> password;
        if (password == usersDatabase.at(email)){
            cout << "\033[1;32m";
            cout << "You have successfully entered the system!" << endl;
            cout << "\033[0m";
        }
        else{
            cout << "\033[1;31m";
            cout << "Wrong password!";
            cout << "\033[0m";
        }
    }
    else
    {
        cout << "\033[1;31m";
        cout << "User with this email does not exist!";
        cout << "\033[0m";
    }
}