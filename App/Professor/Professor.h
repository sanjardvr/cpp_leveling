#include "../Person/Person.h"
class Professor : public Person
{
private:
	float salary;
public:
	int department;

	Professor() //constructor
	{
		salary = 0;
	}
	
    void creteProfessor(Professor obj, std::vector<std::string> vec);
};

void professor();