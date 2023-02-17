#include <iostream>

class Polygon {
protected:
    int length, heigth;
public:
    friend std::istream& operator>>(std::istream&, Polygon&);
    friend std::ostream& operator<<(std::ostream&, Polygon&);
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

std::ostream& operator<<(std::ostream& ouput, Polygon& p)
{
    std::cout << "Area = " << p.area();
}

std::istream& operator>>(std::istream& intput, Polygon& p)
{
    std::cin >> p.length >> p.heigth;
}

int main()
{
    Rectangle r;
    Triangle t;
    std::cin >> r;
    std::cin >> t;
    std::cout << r << std::endl;
    std::cout << t << std::endl;

    return 0;
}