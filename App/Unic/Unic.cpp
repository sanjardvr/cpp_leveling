#include <iostream>
#include "Unic.h"
using namespace std;
void Unic::showProfile(Unic obj)
{
    cout << "-----Profile Info-----" << endl;
    cout << "Viewing as a University access" << endl;
    cout << "Number of Staffs : " << 15 << endl;      // obj.staffNumber << endl;
    cout << "Number of Proffessors : " << 34 << endl; // obj.profsNumber << endl;
    cout << "Number of Students : " << 3822 << endl;  // obj.studentsNumber << endl;
}

// void Unic::setNumbers(Unic obj){
//     obj.staffNumber =
// }

void unic()
{
    Unic mainObj;
    mainObj.showProfile(mainObj);
}
