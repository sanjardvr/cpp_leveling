#include <vector>
#include <string>
#include <iostream>
#include "Staff.h"
#include "../../Core/Utils/idGenerator.h"

class Staff
{
public:
	std::string firstName;
	std::string lastName;
	int age;
	int public_id;
	int department;
	bool isActive;
	Staff() //constructor
	{
		isActive = true;
		password = private_id;
		salary = 0;
	}
	void creteStaff(Staff obj, std::vector<std::string> vec);

private:
	int private_id;
	int password;

protected:
	float salary;
	int phoneNumber;
	std::string address;
};

void Staff::creteStaff(Staff obj, std::vector<std::string> dep)
{ 
	std::cout << "What is Staff's first name : ";
	std::cin >> obj.firstName;

	std::cout << "What is Staff's last name : ";
	std::cin >> obj.lastName;

	std::cout << "What is Staff's age : ";
	std::cin >> obj.age;

	obj.public_id = idGenrator("25", 2);
	std::cout << "Here is the public ID of the Staff : " << obj.public_id << std::endl;

	std::cout << "Select your department and type its number : \n 1.CSI \t 2.BIS \t 3.MED" << std::endl;

	std::cin >> obj.department;

	std::cout << "\033[1;32m"; // Start bold green color
	std::cout << "A full information about the Staff :" << std::endl;
	std::cout << "First Name : " << obj.firstName << std::endl;
	std::cout << "Last Name : " << obj.lastName << std::endl;
	std::cout << "Age : " << obj.age << std::endl;
	std::cout << "Public ID : " << obj.public_id << std::endl;
	std::cout << "Department : " << dep[obj.department - 1] << std::endl;
	std::cout << "Is Active : " << obj.isActive << std::endl;

	std::cout << "\033[0m"; // Reset color to default
}

void staff()
{
	std::vector<std::string> dep = {"CSI", "BUS", "MED"};
	Staff mainObj;
	mainObj.creteStaff(mainObj, dep);
}
