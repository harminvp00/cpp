/*
    practical 11: inheritance
    (iv) write a c++ program to demonstrate constructor call in the derived class.
*/

#include<iostream>
using namespace std;

class base
{
    protected:
    int n1,n2;

    public:
    base(int a, int b)
    {
        n1=a;
        n2=b;
    }
};

class derived : public base
{
    protected:
    int sum;

    public:
    derived(int x, int y) : base(x,y)
    {
        sum=n1+n2;
    }

    void show()
    {
        cout << "First Number is : " << n1 << endl;
        cout << "Second Number is : " << n2 << endl;
        cout << "Addition is " <<  sum << endl;
    }
};

int main()
{
    derived d1(126,137);
    d1.show();
   
    return 0;
}

