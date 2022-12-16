#include <iostream>

void swap(int* a, int* b)
{
    int temp = *a;
    *a=*b;
    *b=temp;
}


int main()
{
    int a=6,b=9;
    std::cout << a << ' ' << b << std::endl;
    swap(&a,&b);
    std::cout << a << ' ' << b << std::endl;
}