#pragma once
#include <string>
class Person
{
private:
	std::string firstName;
	std::string lastName;

protected: // In case the derived class wants to access it
	int age;

public:
	Person();

	Person(std::string fName, std::string lName);

	Person(std::string fName, std::string lName, int age);

	~Person();

	void setFirstName(std::string fName);
	std::string getFirstName();

	void setLastName(std::string lName);
	std::string getLastName();

	void setAge(int age);
	int getAge();

	void sayHello() const;

};