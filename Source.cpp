#include <iostream>
#include "Student.h"
using namespace std;

int main()
{
	system("color F0");
	setlocale(LC_ALL, "rus");
	Student s;
	cin >> s;
	cout << s << endl;

	Student s2("Arina", 23, 12);
	cout << s2 << endl;

	Student s3(10);
	cout << s3 << endl;
	
	s3.SetAge(20);
	s3.SetName("Èìÿ");
	s3.SetYear(1990);
	cout << s3 << endl;

	Student s4;
	s4 = s3;
	s4.AddYear(10);
	cout << s4 << endl;

}