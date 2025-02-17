#include "../Person/Person.h"
class Staff: public Person
{
private: 
	float salary;

public:
	int workspace;

	//Methods
	void createStaff(Staff obj , std::vector<std::string> vec);
};


void staff();