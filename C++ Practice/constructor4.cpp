#include<iostream>
using namespace std;

 class overload {

    int num1,num2;

    public:

    overload()
    {
        num1 = 0;
        num2 = 0;
    }

    overload(int a, int b)
    {
        num1 = a;
        num2 = b;
    }

    overload(float x, float y=5.0)
    {
        num1 = x;
        num2 = y;
    }

    overload(overload &m, overload &n)
    {
        num1 = m.num1;
        num2 = n.num2;
    }

    void output();

};

void overload :: output()
 {
        cout << "number 1 value is : " << num1 << endl;
        cout << "number 2 value is : " << num2 << endl;
 }

int main()
{
    
    cout << "\nno argument" << endl;
    overload o1;
    o1.output();

    cout << "\nparameterized argument" << endl;
    overload o2(12,13);
    o2.output();

    cout << "\ndefualt argument" << endl;
    overload o3(4.0);
    o3.output();

    cout << "\ncopy constuructor..." << endl;
    overload o4(o2);
    o4.output();
    return 0;

}