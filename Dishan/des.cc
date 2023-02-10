#include <iostream>
using namespace std;

class a {
public:
    a() {cout << "a constructed\n";}
    ~a() {cout << "a destructed\n";}
};

class b: public a {
public:
    b() {cout << "b constructed\n";}
    ~b() {cout << "b destructed\n";}
};

int main()
{
    b bobject;
}