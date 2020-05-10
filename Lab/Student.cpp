#include "Student.h"
#include <regex>

Student::Student()
{
}

Student::Student(string fname, string lname, int age, string address, string city, string phone)
{
	set_firstname(fname);
	set_lastname(lname);
	set_age(age);
	set_address(address);
	set_city(city);
	set_phone(phone);
}

Student::~Student()
{
}

string Student::get_firstname()
{
	return this->firstName;
}

void Student::set_firstname(string fname)
{
	if (!fname.empty())
		this->firstName = fname;
	else
		cout << "Enter a valid value" << endl;
}

string Student::get_lastname()
{
	return this->lastName;
}

void Student::set_lastname(string lname)
{
	if (!lname.empty())
		this->lastName = lname;
	else
		cout << "Enter a valid value" << endl;
}

int Student::get_age()
{
	return this->age;
}

void Student::set_age(int age)
{
	if (age > 0)
		this->age = age;
	else
		cout << "Enter a valid value" << endl;
}

string Student::get_address()
{
	return this->address;
}

void Student::set_address(string add)
{
	if (!add.empty())
		this->address = add;
	else
		cout << "Enter a valid value" << endl;
}

string Student::get_city()
{
	return string();
}

void Student::set_city(string city)
{
	if (!city.empty())
		this->city = city;
	else
		cout << "Enter a valid value" << endl;
}

string Student::get_phone()
{
	return this->phone;
}

void Student::set_phone(string phone)
{
	std::regex r("[[:digit:]]{2}-[[:digit:]]{3}-[[:digit:]]{4}");
	//ex. 55-328-0183
	regex* reg = new regex();
	
	
	if (std::regex_match(phone, r))
		this->phone = phone;
	else
		cout << "Enter a valid value" << endl;
}

void Student::SitInClass()
{
	cout << "Sitting in main theater" << endl;
}
