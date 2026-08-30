/*
    practical 11: inheritance
    (i) write a program to simple/single inheritance.
*/

#include<iostream>
using namespace std;

class first
{
    protected:
    int n1, n2;

    public:

    void input(int a, int b);
};

class second : public first
{
    protected:
    int total;

    public:
    void sum();
};

void first :: input(int a, int b)
{
    n1=a;
    n2=b;
}

void second :: sum()
{
    cout << "First number = " << n1 << endl;
    cout << "Second number = " << n2 << endl;
    cout << "Sum is equal to - " << n1+n2 << endl;
}

int main()
{
    second s;
    s.input(12,20);
    s.sum();
    return 0;
}
