#include "../Person/Person.h"

class Student: public Person
{
private:
	float contractSum;
	float gpa;
public:
	int department;

	//Methods
	void createStudent(Student obj , std::vector<std::string> vec);
};

void student();