#include "Person.h"
#include <iostream>

using namespace std;


Person::Person(string setLName)
{
	LastName = setLName;
}

void Person::Talk(string dialog)
{
	cout << endl << LastName << " says: ";
	cout << dialog << endl;
}

string Person::GetLastName()
{
	return LastName;
}

void Person::SetLastName(string setLName)
{
	LastName = setLName;
}

void Person::Yoga()
{
	cout << endl << LastName << " stops and starts to do yoga.";
}