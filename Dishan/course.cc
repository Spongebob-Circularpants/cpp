#include <iostream>

using namespace std;

class Course {
public:
    void getInfo() const 
    {
        cout << "FAther of all other courses." << endl;
    }
};

class Mathematics: protected Course {
public:
    void getInfo() const 
    { cout << "About wierd symbols and calculations."<< endl;}    
};

class Science: protected Course {
public:
    void getInfo() const 
    { cout << "Study of behind the scenes of everything."<< endl;}
};

class Engineering: protected Course {
public:
    void getInfo() const 
    { cout << "Finding best and efficient solutions to any problems except life"<< endl;}
};

class Physics : protected Science {
public:
    void getInfo() const 
    { cout << "Reasons for every natural phenomena."<< endl;}
};

class Chemistry: protected Science {
public:
    void getInfo() const
    { cout << "Study of elements and how to make drugs."<< endl;}
};

int main()
{
    Course c;
    Science s;
    Mathematics m;
    Engineering e;
    Physics p;
    Chemistry chem;

    c.getInfo();
    s.getInfo();
    m.getInfo();
    e.getInfo();
    p.getInfo();
    chem.getInfo();
    return 0;
}