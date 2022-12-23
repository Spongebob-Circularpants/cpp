#include <iostream>

inline double area(int length = 10)
{
    return length * length;
}

inline double area(double length, double breadth)
{
    return length * breadth;
}

inline double area(double radius)
{
    return 3.14 * radius * radius;
}

int main()
{
    int choose;
    std::cout << "Area calculator!" << std::endl
              << "1.Square" << std::endl
              << "2.Rectangle" << std::endl
              << "3.Circle" << std::endl
              << "Choose: ";
    std::cin >> choose;
    if(choose == 2)
    {
        double length, breadth;
        std::cout << "Enter length: "; 
        std::cin >> length;
        std::cout << "Enter breadth: ";
        std::cin >> breadth;
        std::cout << "The area is = " << area(length, breadth) << std::endl;
    }
    else if(choose == 1)
    {
        int length;
        std::cout << "Enter length: ";
        std::cin >> length;
        std::cout << "The area is = " << area(length) << std::endl;
    }
    else if(choose == 3)
    {
        double radius;
        std::cout << "Enter radius: ";
        std::cin >> radius;
        std::cout << "The area is = " << area(radius) << std::endl;
    }
    return 0;
}