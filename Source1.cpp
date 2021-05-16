#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"

using namespace std;

Person::Person()
{
	name = "noname";
	age = 0;
}

Person::Person(string name, int age)
{
	this->name = name;
	this->age = age;
}

Person::Person(const Person& p)
{
	this->name = p.name;
	this->age = p.age;
}

Person::~Person()
{

}

void Person::SetName(string name)
{
	this->name = name;
}

void Person::SetAge(int age)
{
	this->age = age;
}

string Person::GetName()
{
	return this->name;
}

int Person::GetAge()
{
	return this->age;
}

Person& Person::operator= (const Person& p)
{
	if (this == &p)
	{
		return *this;
	}
	name = p.name;
	age = p.age;
	return *this;
}

istream& operator>> (istream& in, Person& p)
{
	cout << "������� ���: ";
	in >> p.name;
	cout << "������� �������: ";
	in >> p.age;

	return in;
}

ostream& operator<< (ostream& out, const Person& p)
{
	out << "���: " << p.name << endl;
	out << "�������: " << p.age << endl;

	return out;
}



Student::Student(): Person()
{
	this->year = 0;
}

Student::Student(string name, int age, int year): Person(name, age)
{
	this->year = year;
}

Student::Student(int year): Person()
{
	this->year = year;
}

Student::Student(const Student& s): Person(s)
{
	this->year = s.year;
}

Student::~Student()
{

}

void Student::SetYear(int year)
{
	this->year = year;
}

int Student::GetYear()
{
	return this->year;
}

void Student::AddYear(int year)
{
	this->year += year;
}

Student& Student::operator= (const Student& s) 
{
	if (this == &s)
	{
		return *this;
	}
	name = s.name;
	age = s.age;
	year = s.year;
	return *this;
}

istream& operator>> (istream& in, Student& s)
{
	cout << "������� ���: ";
	in >> s.name;
	cout << "������� �������: ";
	in >> s.age;
	cout << "������� ���: ";
	in >> s.year;

	return in;
}

ostream& operator<< (ostream& out, const Student& s)
{
	out << "���: " << s.name << endl;
	out << "�������: " << s.age << endl;
	out << "���: " << s.year << endl;

	return out;
}
