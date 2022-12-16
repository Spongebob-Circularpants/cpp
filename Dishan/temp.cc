#include <iostream>

int main()
{
    float in, out, choose;
    std::cout << "1. Celcius to fahrenheit\n2. Fahrenheit to Celcius\nChoose: ";
    std::cin >> choose;

    std::cout << "Enter temp : ";
    std::cin >> in;
    if(choose ==1) out = 1.8 * in + 32;
    if(choose == 2) out = 5/9.0 * (in - 32);
    std::cout << "After conversion = " << out << std::endl;
    return 0;
}