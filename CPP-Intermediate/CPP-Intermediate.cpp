// CPP-Intermediate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Pointers.h"

void modifyPerson(Person &);

int main()
{
    /*
      POINTERS
    */
    Pointers Pointer;
    Pointer.basics();

    std::cout << "Create a pointer to an object, Pointer, Address:" << &Pointer << std::endl;
    /* This will create a pointer to the object Pointer,
      Notice how the operator to access the methods changes from dot . to arrow ->
    */
    Pointers* pPointer = &Pointer;
    std::cout << "Create a pointer to an object, pPointer, Address:" << pPointer << std::endl;
    pPointer->basics();

    Pointer.referenceTypes();

    Pointer.memoryManagement();

    Pointers* pPointer2 = new Pointers;// &Pointer;
    std::cout << "Create a pointer to an object, pPointer2, Address:" << pPointer2 << std::endl;
    delete pPointer2;

    /*  Lab: Create a function in your application called ModifyPerson() that accepts a Person object as an argument.  
    NOTE: This function should be in the application area and not inside the Person class.
    It should modify the class properties if you passed the object correctly to the function.
    */

    Person p1{ 5 };
    std::cout << "Person age before modifyPerson:" << p1.get_Age() << std::endl; // 5
    modifyPerson(p1);
    std::cout << "Person age after modifyPerson:" << p1.get_Age() << std::endl; // 100

    std::cout << "Hello World!\n";
}

void modifyPerson(Person &person)
{
    person.set_Age(100);
}
