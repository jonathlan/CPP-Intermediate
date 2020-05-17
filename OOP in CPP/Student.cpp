#include "Student.h"
#include <iostream>

// No argument Student constructor
// This will call the base class default constructor first
Student::Student()
	: course("Unassigned course")
{
	std::cout << "Hello from: Student::Student()" << std::endl;
}

// Paramaeterized Student constructor
// This will call the parameterized Person constructor and then initialize course.
// Finally print below line to the console
Student::Student(std::string firstName, std::string lastName, int age, std::string course)
	: Person(firstName, lastName, age), course(course)
{
	std::cout << "Student::Student(firstName, lastName, age, course)" << std::endl;
}

Student::~Student()
{
}

void Student::displayCourseName() const
{
	std::cout << "My course is: " << course << std::endl;
}
