#include <iostream>
using namespace std;
#include <string>
#include "../../Core/Source/Core/Core.h"
#include "../../Core/Utils/controls.h"
#include "../Students/Students.h"
#include "../Professor/Professor.h"
#include "../Staff/Staff.h"
#include "../Unic/Unic.h"

void hello()
{
    cout << "You entered A" << endl;
}
int main()
{
    // unic(); //?superuser
    if (Core::start())
    {
        controlPanel();
        // staff();     //?moderator
        // professor(); //?admin
        // student();   //?user
    }
    else
    {
        throw runtime_error("Access was denied!");
    }
}
