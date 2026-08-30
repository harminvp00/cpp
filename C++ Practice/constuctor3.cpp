#include<iostream>
using namespace std;

class test{

    int cm,km;

    public:

    test(int m, int n)
    {
        cm = m;
        km = n;
    }

    void display()
    {
        cout << "parameterized costructors..." << endl;
        cout << "centimeters - " << cm << endl;
        cout << "kilometers - " << km << endl;
    }
};

int main()
{
    test t(1200, 19);   // parameterized constructor called
    t.display();    // print value
    return 0;
}