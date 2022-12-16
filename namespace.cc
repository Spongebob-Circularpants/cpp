#include <iostream>

namespace Dishan {
    int add(int a, int b);
}

int Dishan::add(int a, int b)
{
    return a+b;
}

int main()
{
    std::cout << Dishan::add(5,6) << std::endl;
}