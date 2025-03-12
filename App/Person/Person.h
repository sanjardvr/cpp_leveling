#ifndef PERSON
#define PERSON
class Person
{
private:
	std::string private_id;
	std::string password;

protected:
	int phoneNumber;
	std::string address;

public:
	std::string firstName;
	std::string lastName;
	int age;
	std::string public_id;
	bool isActive;

	Person() //constructor
	{
		isActive = true;
		password = private_id;
	}

    //Methods
};
#endif //PERSON