#include "Animal.h"

Animal::Animal(const string& name, const string& sex, const string& color) 
	:name(name), sex(sex), color(color){}

void Animal::Print()const {

	cout << "name: " << name << endl;
	cout << "sex: " << sex << endl;
	cout << "color: " << color << endl;
}