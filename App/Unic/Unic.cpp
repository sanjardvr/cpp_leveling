#include <iostream>
#include <vector>
#include <string>
#include "Unic.h"
#include "../../Core/Source/Core/database.h"
using namespace std;

void secondCardView();
void showProfile(Unic obj)
{
    cout << "\033[1;33m";
    cout << "-----Existing Profiles-----" << endl;

    for (auto k : univerDatabase)
    {
        cout << k.first << " : " << k.second << endl;
    }

    cout << "\033[0m";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    
    std::cout << "Press Enter to continue...";
    std::cin.get();  // Waits for the user to press Enter

    secondCardView();
}


void secondCardView()
{
    vector<string> commands = {"Show Profiles", "Add User", "Delete User", "Change User", "Edit Other Modules", "Go Back"};
    Unic mainObj;
    Controls obj;

    cout << mainObj.title << endl;
    mainObj.listAllCommands(commands);
    switch (mainObj.controlPanel(obj))
    {
    case 1:
        system("clear");
        showProfile(mainObj);
    case 2:
        cout << "end";
        break;
    case 3:
        cout << "end";  
        break;
    case 4:
        cout << "end";
        break;
    case 5:
        cout << "end";
        break;
    case 6:
        cout << "end";
        break;
    case 7:
        cout << "end";
        break;
    default:
        break;
    }
}

void login(Unic obj)
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
                secondCardView();
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

void createUser(Unic obj)
{
    string email;
    string password;
    cout << "-----User creation proccess-----" << endl;
    cout << "Enter email : ";
    cin >> email;

    if (univerDatabase.count(email) != 1)
    {
        cout << "Enter password : ";
        cin >> password;

        univerDatabase.insert({email, password});
        obj.setPassword(password);
                cout
            << "\033[1;32m";
        cout << "User created successfully!" << endl;
        cout << "\033[0m";
        unic();
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
        login(mainObj);
        break;
    case 2:
        createUser(mainObj);
        break;
    default:
        break;
    }
}
