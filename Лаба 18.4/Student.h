#pragma once
#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

class Student : public Person
{
public:
	Student();
	Student(string name, int age, int year);
	Student(int year);
	Student(const Student& s);
	~Student();

	void SetYear(int year);
	int GetYear();

	void AddYear(int year);

	Student& operator= (const Student& s);
	friend istream& operator>> (istream& in, Student& s);
	friend ostream& operator<< (ostream& out, const Student& s);

protected:
	int year;
};