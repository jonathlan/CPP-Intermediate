// CPP-Classes.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include "Math.h"
#include "Person.h"

using namespace std;

int main()
{
    cout << "STATIC CLASS" << endl;
    int result = Math::pow(1    , 10);
    cout << result << endl;

    cout << "USING CONSTRUCTORS" << endl;
    Person* pOne = new Person();
    Person* pTwo = new Person("John", "Doe");
    Person* pThree = new Person("Jane", "Jason", 24);

    // Below line is not legal, we need to use pointers when creating objects in C++
    // Person per = new Person();

    //For accessing members of the class you have to use the arrow operator
    cout << pTwo->GetLastName() << endl;

    delete pOne, pTwo, pThree;

    return 0;
}