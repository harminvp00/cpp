#include<iostream>
using namespace std;

//multilevel inheritance
class one
{
    protected:
    int n1,n2;

    public:
    void input(int a, int b)
    {
        n1=a;
        n2=b;
    }
   
};

class two : public one
{
    protected:
    int mul;

    public:
    void multiply()
    {
        mul=n1*n2;
    }
};

class three : public two
{
    public:
    void show()
    {
        cout << "multiplication = " << mul << endl;
    }
};

int main()
{
    three th; //object created
    
    th.input(12,11);
    th.multiply();
    
    th.show();
    return 0;   
}