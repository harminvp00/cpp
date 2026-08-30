#include<iostream>
using namespace std;

// single inheritance
class first
{
    protected:
    int n1, n2;

    public:

    void input(int a, int b)
    {
        n1=a;
        n2=b;
    }
};

class second : public first
{
    protected:
    int total;

    public:
    void sum()
    {
        cout << "\nsum is equal to - " << n1+n2 << endl;
    }
};

int main()
{
    second s;
    s.input(12,20);
    s.sum();
    return 0;
}