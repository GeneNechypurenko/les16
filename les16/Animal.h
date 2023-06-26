#pragma once
#include <iostream>
#include <string>

using namespace std;

class Animal {

protected:

    string name;
    string sex;
    string color;

public:

    Animal(const string& name, const string& sex, const string& color);

    void Print() const;
};