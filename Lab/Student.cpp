#include "Student.h"
#include <regex>

string Student::get_firstname()
{
	return this->firstName;
}

void Student::set_firstname(string fname)
{
	if (!fname.empty() and !fname.compare(NULL))
		this->firstName = fname;
	else
		cout << "Enter a valid value";
}

string Student::get_lastname()
{
	return this->lastName;
}

void Student::set_lastname(string lname)
{
	if (!lname.empty() and !lname.compare(NULL))
		this->lastName = lname;
	else
		cout << "Enter a valid value";
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
		cout << "Enter a valid value";
}

string Student::get_address()
{
	return this->address;
}

void Student::set_address(string add)
{
	if (!add.empty() and !add.compare(NULL))
		this->address = add;
	else
		cout << "Enter a valid value";
}

string Student::get_city()
{
	return string();
}

void Student::set_city(string city)
{
	if (!city.empty() and !city.compare(NULL))
		this->city = city;
	else
		cout << "Enter a valid value";
}

string Student::get_phone()
{
	return this->phone;
}

void Student::set_phone(string phone)
{
	std::regex r("[[:digit:]]{2}-[[:digit:]]{3}-[[:digit:]]{4}");
	regex* reg = new regex();
	
	
	if (std::regex_match(phone, r))
		this->phone = phone;
	else
		cout << "Enter a valid value";
}
