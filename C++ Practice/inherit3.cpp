#include<iostream>
using namespace std;

//multiple inheritance
class Radius
{
    protected:
    float radius;

    public:
    void get1(float r)
    {
        radius = r;
    }
};

class pi_value
{
    protected: 
    float pi;

    public:
    void get2(float p)
    {
          pi = p;
    }
};

class Area : public Radius, public pi_value
{
    public:
    void show()
    {
        cout << "Area of circle is " << pi*radius*radius << endl;
    }
};

int main()
{
    Area a;

    a.get1(19); // for radius
    a.get2(3.14); // for pi=3.14

    a.show(); // for print area of circle

    return 0;
}