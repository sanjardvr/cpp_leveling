#include <iostream>
#include <vector>
#include <string>
#include "Unic.h"
#include "../../Core/Source/Core/database.h"
using namespace std;
void Unic::showProfile(Unic obj)
{
    cout << "-----Profile Info-----" << endl;
    cout << "Viewing as a University access" << endl;
    cout << "Number of Staffs : " << 15 << endl;      // obj.staffNumber << endl;
    cout << "Number of Proffessors : " << 34 << endl; // obj.profsNumber << endl;
    cout << "Number of Students : " << 3822 << endl;  // obj.studentsNumber << endl;
}

void Unic::login(Unic obj)
{
    cout << endl;
    string email;
    string password;
    cout << "-----LogIn proccess-----" << endl;
    cout << "Enter email : ";
    cin >> email;
    if (univerDatabase.count(email) != 0)
    {
        while (true)
        {
            cout << "Enter password : ";
            cin >> password;
            if (password == univerDatabase.at(email))
            {
                cout << "\033[1;32m";
                cout << "You have enterd the system" << endl;
                cout << "\033[0m";
                break;
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
        cout << endl;
        unic();
        
    }
}

void Unic::createUser(Unic obj)
{
    string email;
    string password;
    cout << "-----User creation proccess-----"<<endl;
    cout << "Enter email : ";
    cin >> email;

    if (univerDatabase.count(email) != 1)
    {
        cout << "Enter password : ";
        cin >> password;

        univerDatabase.insert({email, password});
        cout << "\033[1;32m";
        cout << "User created successfully!" << endl;
        cout << "\033[0m";
    }
    else
    {
        cout << "\033[1;31m";
        cout << "User with this email already exists!" << endl;
        cout << "\033[0m";
        unic();
    }
}
void unic()
{
    vector<string> commands = {"Login", "Create User"};
    Unic mainObj;
    Controls obj;

    cout << mainObj.title << endl;
    mainObj.listAllCommands(commands);
    switch (mainObj.controlPanel(obj))
    {
    case 1:
        mainObj.login(mainObj);
        break;
    case 2:
        mainObj.createUser(mainObj);
        break;
    default:
        break;
    }
}
