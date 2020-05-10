#include "Teacher.h"
#include <regex>

Teacher::Teacher()
{
}

Teacher::Teacher(string fname, string lname, int age, string address, string city, string phone)
{
	set_firstname(fname);
	set_lastname(lname);
	set_age(age);
	set_address(address);
	set_city(city);
	set_phone(phone);
}

Teacher::~Teacher()
{
}

string Teacher::get_firstname()
{
	return this->firstName;
}

void Teacher::set_firstname(string fname)
{
	if (!fname.empty())
		this->firstName = fname;
	else
		cout << "Enter a valid value" << endl;
}

string Teacher::get_lastname()
{
	return this->lastName;
}

void Teacher::set_lastname(string lname)
{
	if (!lname.empty())
		this->lastName = lname;
	else
		cout << "Enter a valid value" << endl;
}

int Teacher::get_age()
{
	return this->age;
}

void Teacher::set_age(int age)
{
	if (age > 0)
		this->age = age;
	else
		cout << "Enter a valid value" << endl;
}

string Teacher::get_address()
{
	return this->address;
}

void Teacher::set_address(string add)
{
	if (!add.empty())
		this->address = add;
	else
		cout << "Enter a valid value" << endl;
}

string Teacher::get_city()
{
	return string();
}

void Teacher::set_city(string city)
{
	if (!city.empty())
		this->city = city;
	else
		cout << "Enter a valid value" << endl;
}

string Teacher::get_phone()
{
	return this->phone;
}

void Teacher::set_phone(string phone)
{
	std::regex r("[[:digit:]]{2}-[[:digit:]]{3}-[[:digit:]]{4}");
	//ex. 55-328-0183
	regex* reg = new regex();


	if (std::regex_match(phone, r))
		this->phone = phone;
	else
		cout << "Enter a valid value" << endl;
}
