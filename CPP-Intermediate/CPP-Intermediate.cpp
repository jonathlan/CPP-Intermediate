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
    Pointer.Excecute();

    std::cout << "Create a pointer to an object, pPointer, Address:" << &Pointer << std::endl;
    /* This will create a pointer to the object Pointer,
      Notice how the operator to access the methods changes from dot . to arrow ->
    */
    Pointers *pPointer = &Pointer;
    pPointer->Excecute();


    std::cout << "Hello World!\n";
}