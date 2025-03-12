#include <iostream>
#include <map>
using namespace std;
#include "../Source/Core/database.h"
bool login()
{
    string email;
    string password;
    int attempts = 3;
    cout << "-----LogIn proccess-----" << endl;
    cout << "Enter email : ";
    cin >> email;

    if (usersDatabase.count(email) != 0)
    {
        while (attempts > 0)
        {
            cout << "Enter password : ";
            cin >> password;
            if (password == usersDatabase.at(email))
            {
                return true;
            }
            else
            {   
                attempts--;
                cout << "\033[1;31mWrong password! Attempts left: " << attempts << "\033[0m" << endl;
            }
        }
        cout << "\033[1;31mToo many failed attempts!\033[0m" << endl;
        return false;
    }
    else
    {
        cout << "\033[1;31m";
        cout << "User with this email does not exist!" << endl;
        cout << "\033[0m";
        return false;
    }
}