
#include <iostream>
#include <windows.h>

#include "Animal.h"
#include "Dog.h"

using namespace std;


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Dog dog("Golden Retriever", 4, "Buddy", "boy", "golden");

    dog.Print();
    return 0;
}