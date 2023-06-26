#pragma once
#include <iostream>
#include <string>

#include "Animal.h"

using namespace std;

class Dog :public Animal {

private:
	string breed;
	int age;

public:
	Dog(const string& breed, int age, const string& name, const string& sex, const string& color);

	void Print() const;
};

