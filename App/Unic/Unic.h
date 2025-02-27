// #include "../Students/Students.h"
//  #include "../Professor/Professor.h"
//  #include "../Staff/Staff.h"
class Unic
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
	Unic() // constructor
	{
		password = private_id;
	}
	void showProfile(Unic obj);
	// void setNumbers(Unic obj);
};
void unic();