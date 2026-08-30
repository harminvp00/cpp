/*
    practical 10: 
    (iii) write a c++ program to demonstrate use of parameterized constructor.
*/

#include<iostream>
using namespace std;

class test{

    int cm,km;

    public:

    test()  
    {   
        cm=0;
        km=0;
    }

    test(int m, int n)
    {
        cout << "parameterized costructors called..." << endl;
        cm = m;
        km = n;
    }

    void display()
    {
        cout << "centimeters - " << cm << endl;
        cout << "kilometers - " << km << endl;
    }
};

int main()
{
    test t1;
    test t2(1200, 19);   // parameterized constructor called
    t2.display();        // print value of cm and km
    return 0;
}