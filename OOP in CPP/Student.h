#pragma once
#include "Person.h"

class Student :
	public Person
	// Public - Members from the base class remains public when we access them
	// Private - 
{
private:
	std::string course;
public:
	Student();
	Student(std::string firstName, std::string lastName, int age, std::string course);
	~Student();

	void displayCourseName() const;
};

