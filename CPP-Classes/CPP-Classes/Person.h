#pragma once
#include <string>
class Person
{
private:
	std::string firstName = "";
	std::string lastName = "";

	int age = 0;

public:

	/* Default constructor
	  Important to have a contructor so you can initialize variables properly
	  This is specially important for arrays or pointers which can have undefined values.
	  Another case is when the contructore receives another class as an argument, the compiler cannot
	  initialize this type of variables.
	*/
	Person();

	Person(std::string fName, std::string lName);

	Person(std::string fName, std::string lName, int age);

	/*  Desctructor
		Destructors cannot have any arguments passed in to them
		Remember that everytime you create an object using the new keyword, memory is allocated to it
		and it will not be released until delete keyword is used.
		The destructor is the correct place to call delete for any objects created within this class.
	*/
	~Person();

	void SetFirstName(std::string fName);
	std::string GetFirstName();

	void SetLastName(std::string lName);
	std::string GetLastName();

	void SetAge(int age);
	int GetAge();

	void SayHello();
	
};