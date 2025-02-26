#include <iostream>
#include <map>
using namespace std;
#include "../Source/Core/database.h"
bool login()
{
    string email;
    string password;
    cout << "-----LogIn proccess-----" << endl;
    cout << "Enter email : ";
    cin >> email;

    if (usersDatabase.count(email) != 0)
    {
        while (true)
        {
            cout << "Enter password : ";
            cin >> password;
            if (password == usersDatabase.at(email))
            {
                return true;
            }
            else
            {
                cout << "\033[1;31m";
                cout << "Wrong password!" << endl;
                cout << "\033[0m";
            }
        }
    }
    else
    {
        cout << "\033[1;31m";
        cout << "User with this email does not exist!" << endl;
        cout << "\033[0m";
        return false;
    }
}