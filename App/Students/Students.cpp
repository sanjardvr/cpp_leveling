#include <vector>
#include <string>
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
	int department;
	bool isActive;
	Student()
	{
		isActive = true;
		password = private_id;
		contractSum = 0;
	}
	void creteStudent(Student obj, std::vector<std::string> vec);

private:
	int private_id;
	int password;

protected:
	float contractSum;
	int phoneNumber;
	std::string address;
};

void Student::creteStudent(Student obj, std::vector<std::string> dep)
{
	std::cout << "What is student's first name :";
	std::cin >> obj.firstName;

	std::cout << "What is student's last name :";
	std::cin >> obj.lastName;

	std::cout << "What is student's age :";
	std::cin >> obj.age;

	obj.public_id = idGenrator("25", 1);
	std::cout << "Here is the public ID of the student : " << obj.public_id << std::endl;

	std::cout << "Select your department and type its number : \n 1.CSI \t 2.BIS \t 3.MED" << std::endl;

	std::cin >> obj.department;

	std::cout << "\033[1;32m"; // Start bold green color
	std::cout << "A full information about the Student :" << std::endl;
	std::cout << "First Name : " << obj.firstName << std::endl;
	std::cout << "Last Name : " << obj.lastName << std::endl;
	std::cout << "Age : " << obj.age << std::endl;
	std::cout << "Public ID : " << obj.public_id << std::endl;
	std::cout << "Department : " << dep[obj.department - 1] << std::endl;
	std::cout << "Is Active : " << obj.public_id << std::endl;

	std::cout << "\033[0m"; // Reset color to default
}

void student()
{
	std::vector<std::string> dep = {"CSI", "BUS", "MED"};
	Student mainObj;
	mainObj.creteStudent(mainObj, dep);
}
