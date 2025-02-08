#include <iostream>
#include "Students.h"
#include "../../Core/Utils/idGenerator.h"
class Student
{
public:
	std::string firstName;
	std::string lastName;
	int age;
	int public_id;
	std::string department;
	bool isActive;
	Student()
	{	
		isActive = true;
		password = private_id;
		contractSum = 0;
	}
	void creteStudent(Student obj);

private:
	int private_id;
	int password;

protected:
	float contractSum;
	int phoneNumber;
	std::string address;


	//constructor
	

	//methods
	
};

void Student::creteStudent(Student obj)
{
	std::cout<<"What is student's first name :";
	std::cin>>obj.firstName;

	std::cout<<"What is student's last name :";
	std::cin>>obj.lastName;

	std::cout<<"What is student's age :";
	std::cin>>obj.age;

}

void student()
{
 	Student mainObj;
	//mainObj.creteStudent(mainObj);
	std::cout << "My generator : " << idGenrator("22" , 3) << std::endl;
}
