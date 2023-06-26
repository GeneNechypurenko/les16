#include "Dog.h"

Dog::Dog(const string& breed, int age, const string& name, const string& sex, const string& color)
	:	Animal(name, sex, color)
{
	this->breed = breed;
	this->age = age;
}

void Dog::Print() const {

	Animal::Print();
	cout << "breed: " << breed << endl;
	cout << "age: " << age << endl;
}