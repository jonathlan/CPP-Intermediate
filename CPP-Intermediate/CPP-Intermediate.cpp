// CPP-Intermediate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Pointers.h"

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

    std::cout << "Hello World!\n";
}