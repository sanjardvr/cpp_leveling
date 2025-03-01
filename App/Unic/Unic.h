#include "../../Core/Utils/Controls/controls.h"
class Unic : public Controls
{
private:
	int private_id;
	int password;
	// Professor profObj;
	// Staff staffObj;
	// Student studentObj;

public:
	std::string email;
	int staffNumber;
	int studentsNumber;
	int profsNumber;
	string title = "--------University Panel--------"; //? C++ OOP Runtime Polymorphism with Data Members
	Unic() // constructor
	{
		password = private_id;
	}
	void showProfile(Unic obj);
	
	// void setNumbers(Unic obj);
};
void unic();