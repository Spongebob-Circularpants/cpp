#include <iostream>

class Polygon {
protected:
    int length, heigth;
public:
    Polygon(int l, int h): length(l), heigth(h) {}
    Polygon(){}
    virtual int area()=0;
};

class Rectangle : public Polygon {
public:
    Rectangle(int l, int h):Polygon(l,h) {}
    virtual int area() 
    {
        return length * heigth;
    }
    Rectangle(){}
};

class Triangle: public Polygon {
public:
    Triangle(int l, int h): Polygon(l,h) {}
    virtual int area() 
    {
        return (length * heigth) / 2;
    }
    Triangle(){}
};

int main()
{
    Rectangle r(4,5);
    Triangle t(5,6);
    Polygon* p;
    p = &r;
    std::cout << "Area = " << p->area() << std::endl;
    p = &t;
    std::cout << "Area = " << p->area() << std::endl;
    return 0;
}