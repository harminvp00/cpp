#include<iostream>
using namespace std;

class base
{
    protected:
    int height;

    public:
    base(int h)
    {
        cout << "base class contuctor called..." << endl;
        height=h;
    }
};

class derived : public base
{
    public:
    derived(int x) : base(x)
    {
        cout << "derived class constructor called..." << endl;
    }

    void show()
    {
        cout << "height is " <<  height << endl;
    }
};

int main()
{
    derived d1(100);
    d1.show();
   
    return 0;
}

