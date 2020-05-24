#include "Person.h"
#include <iostream>

Person::Person()
    :firstName("No name"), lastName("No last name"), age(0)
{
    // This will help to show how the base class constructor is always called before the derived class constructor.
    std::cout << "Hello from Person::Person()" << std::endl;
}

// Parameterized Person constructor.
Person::Person(std::string fName, std::string lName)
    :firstName(fName), lastName(lName), age(0)
{
    std::cout << "Hello from Person::Person(fName, lName)" << std::endl;
}

// Parameterized Person constructor, including age.
Person::Person(std::string fName, std::string lName, int age)
    :firstName(fName), lastName(lName), age(age)
{
    std::cout << "Hello from Person::Person(fName, lName, age)" << std::endl;
}

Person::~Person()
{
}

void Person::setFirstName(std::string fName)
{
    this->firstName = fName;
}

std::string Person::getFirstName()
{
    return this->firstName;
}

void Person::setLastName(std::string lName)
{
    this->lastName = lName;
}

std::string Person::getLastName()
{
    return this->lastName;
}

void Person::setAge(int age)
{
    if (age > 0)
        this->age = age;
    else
        std::cout << "Please enter a valid age" << std::endl;
}

int Person::getAge()
{
    return this->age;
}

void Person::sayHello() const
{
    std::cout << "Hello from Person Class, my name is: " << firstName << std::endl;
}

/* Friend function
    This functions has access to all the members of the target object, public and private.
    Notice that this is not prefixed with the "ClassName::" syntax, because this is not a member of the class.
*/
void someExternalFunction(Person& targetObject)
{
    // Access any member of the class either public private or protected.
}
