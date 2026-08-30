/*
    practical 10 : Constructor and Destructor
    (ii) write a c++ program to copy the value of one object to another object using copy constructor
*/

#include<iostream>
using namespace std;

class copy1
{
    int n1,n2;

    public:
    copy1()
    {
        n1=0;
        n2=0;
    }

    copy1(int x, int y)
    {
        n1=x;
        n2=y;
    }

    copy1(copy1 &a, copy1 &b)
    {
        n1= a.n1;
        n2= b.n2;
    }

    void output()
    {
        cout << "num1 = " << n1 << ", num2 = " << n2 << endl;
    }
};

int main()
{
    copy1 c1;
    copy1 c2(200,400);      // parameterized constructor called
    copy1 c3(c2);           // copy constructor called, 
                            // c2 object copy into by c3 object

    cout << "no argument constructor..." << endl;
    c1.output();
    cout << "parameterized constructor..." << endl;
    c2.output();
    cout << "copy constructor..." << endl;
    c3.output();

    return 0;
}