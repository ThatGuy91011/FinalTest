#pragma once
#include <string>

using namespace std;
class Person
{
public:
	Person(string setLName);
	void Talk(string dialog);
	string GetLastName();
	void SetLastName(string setLName);
	void Yoga();
	
private:
	string LastName;
};

