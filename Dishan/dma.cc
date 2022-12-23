#include <iostream>

int main()
{
    int* a = new int;
    char *name = new char[10];
    std::cout << "Enter a number: " ;
    std::cin >> *a;
    std::cout << "Enter name: ";
    std::cin >> name;
    std::cout << "The number you entered is " << *a << std::endl
              << "The name entered is " << name << std::endl;
    delete a, name;
    return 0;
}