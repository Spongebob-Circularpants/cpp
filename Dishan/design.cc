#include <iostream>

class Design1 {
    int code, qty, price;
public:
    Design1(int c, int q, int p)
    {
        code = c;
        qty = q;
        price = p;
    }
    int getCode() const{ return code; }
    int getValue() const { return qty * price; }
    void print() const 
    {
        std::cout << "code: " << code << " qty: " << qty << " price: " << price << std::endl;
    }
};

class Design2 {
    int code, value;
public:
    Design2(int c, int v)
    {
        code = c;
        value = v;
    }
    Design2(Design1 d)
    {
        code = d.getCode();
        value = d.getValue();
    }
    void print() const 
    {
        std::cout << "code: " << code <<" value: " << value << std::endl;
    }
};

int main()
{
    Design1 d1(45,6,8);
    Design2 d2 = d1;

    d1.print();
    d2.print();
    return 0;

}