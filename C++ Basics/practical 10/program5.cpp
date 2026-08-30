/*
    practical 10: Constructor and Destructor
    (v) write a c++ program to print message when object gets destroyed using destructor
*/

#include <iostream>
using namespace std;

int count = 0;

class Test
{
    public:
    Test()
    {
        count++;
        cout << "No of object created : " << count << endl;
    }
    ~Test()
    {
        cout << "No of object Destroyed : " << count << endl;
        count--;
    } 
};

int main()
{
    cout << "List of created of object " << "\n\n";

    Test t1,t2;     // two object created t1 and t2

    cout << "\nList of destroyed of object " << "\n\n";

    return 0;
}      