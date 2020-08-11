#pragma once
#include<iostream>
using namespace std;
class NoPersonExeption
{
private:
	int persons;
public:
	NoPersonExeption(int p) { persons = p; }
	int getPersons() { return persons; }
};

