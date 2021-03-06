// OOP in CPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Handle.h"


int main()
{
    Student s1;
    // Below line cause an error because firstName from Person class is private
    // s1.firstname = "Tom";

    // The correct way to access it is using the public accessor:
    s1.setFirstName("Tom");

    // This is ok too:
    s1.sayHello();

    // Create a student object with no-argument constructor
    Student s2;
    s2.sayHello();
    s2.displayCourseName();

    // Create a student object using the parametrized constructor
    Student s3("Tom", "Bradley", 35, "Physics");
    s3.sayHello();
    s3.displayCourseName();

    // Demonstrate the access to a protected field in base class directly from derived class
    s3.howOldAmI();
    s3.updateAge(34);
    std::cout << s3.getFirstName() << "'s updated age is " << s3.getAge() << std::endl;

    // Friend classes
    // Handle is a friend of Body class
    Handle h;
    h.someOperationOnBodyClass(); // This function will access a private field in Body Class
}