// Lab.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Student.h"
#include "Course.h"

int main()
{
    Student* student1 = new Student("John", "Doe", 15, "Texas", "Houston", "55-321-3234");
    Student* student2 = new Student("Janet", "Jackson", 25, "California", "San Diego", "53-123-0987");
    Student* student3 = new Student("Bruce", "Lee", 35, "Washington", "DC", "65-768-1622");

    Teacher* teacher = new Teacher("Miyagi", "San", 89, "California", "Palo Alto", "94-097-1234");

    Course* intermediateCPP = new Course("Intermediate C++", teacher);
    intermediateCPP->add_student(student1);
    intermediateCPP->add_student(student2);
    intermediateCPP->add_student(student3);
    intermediateCPP->add_student(student1);
    cout << "Course name: " << intermediateCPP->get_title() << endl;
        
    cout << "Teacher name: " << intermediateCPP->teacher->get_firstname() << endl;

    teacher->GradeStudent();

    std::cout << "Good bye!\n";
}