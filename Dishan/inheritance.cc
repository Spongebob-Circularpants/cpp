#include <iostream>
#include <string>

class Student {
protected:
    int id;
    std::string name;
public:
    Student() {};
    Student(std::string n, int i)
    {
        id = i;
        name = n;
    }
};

class Test: protected Student {
    int year, semester;
public:
    Test () {}
    Test(std::string n, int i, int y, int s): Student(n,i), year(y), semester(s) { }
};

class Result : protected Test {
protected:
    int maths, physics, chemistry, oop, total;
public:
    Result() {}
    Result(std::string n,int i, int y, int s, int m, int p, int c, int o):
        Test(n, i, y, s)
    {
        maths = m;
        physics = p;
        chemistry = c;
        oop = o;
        total = m+p+c+o;
    }
    double getPercent() const
    { return (total/400.0) * 100; }
    int getTotal() const { return total; }

    void display() const 
    {
        using std::cout;
        using std::endl;
        cout << "   Student Details\n"
            << "Name: " << name << endl
            << "ID: " << id << endl << endl
            << "    Marksheet Details\n"
            << "Maths: " << maths << endl
            << "Physics: " << physics<< endl
            << "Chemistry: " << chemistry<< endl
            << "OOP: " << oop<< endl << endl
            << "Total obtained: " << total << endl
            << "Percentage: " << getPercent() << "%\n\n";
    }
};

int main()
{
    Result diwas("Diwas Dahal", 15, 1, 2, 81, 35, 40, 100);
    diwas.display();
    return 0;
}