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
    
}

void unic()
{
    vector<string> commands = {"Login" , "Create User"};
    Unic mainObj;
    Controls obj;

    cout << mainObj.title << endl;
    mainObj.listAllCommands(commands);
    mainObj.controlPanel(obj);
}
