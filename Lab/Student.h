#pragma once
#include <iostream>
using namespace std;

class Student
{
private:
	string firstName = "";
	string lastName = "";
	int age = 0;
	string address = "";
	string city = "";
	string phone = "";
public:
	Student();
	Student(string fname, string lname, int age, string address, string city, string phone);
	~Student();
	string get_firstname();
	void set_firstname(string fname);
	string get_lastname();
	void set_lastname(string lname);
	int get_age();
	void set_age(int age);
	string get_address();
	void set_address(string add);
	string get_city();
	void set_city(string city);
	string get_phone();
	void set_phone(string phone);
};