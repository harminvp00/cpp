#include<iostream>
using namespace std;

class dist
{
    int feet;
    int inches;

    public:
    void input(int a, int b)
        {
            feet = a;
            inches = b;
        }

    void output()
    {
        cout << feet << " feet and " << inches << " inches" << endl;
    }

    void add(dist d1, dist d2);

};

void dist :: add(dist d1, dist d2)
{
    feet = d1.feet + d2.feet;
    inches = d1.inches + d2.inches;
} 

int main()
{
    dist d1, d2, d3;
    d1.input(12,32);
    d2.input(15,34);

    d3.add(d1,d2);

    cout << "d1 --- "; d1.output();
    cout << "d2 --- "; d2.output();
    cout << "d3 --- "; d3.output();

    return 0;
    
}


