#include <iostream>
using namespace std;


class Test
{
    public:
    Test()
    {
        cout << "\nconstructor called..";
    }
    
    ~Test()
    {
        cout << "\ndestructor called..";
    }

};

int main()
{
    Test T1;
    {
        Test T2;
    }
    Test T3;
    return 0;
}      