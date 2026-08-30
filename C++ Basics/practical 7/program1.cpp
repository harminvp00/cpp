/*
    practical 7: static variable and function
    (i) Write a C++ program using static member function to increment value of variable 3 times
*/

#include<iostream>
using namespace std;

class item
{
    int num;
    static int count;

    // get data using 
    public:
    void get_data(int a)
    {
        num=a;
        count++;
    }

    
    void getcount()
    {
        cout << "count = " << count << endl;
    }
};

// access count outside the class 
int item :: count;


int main()
{
    item i1,i2,i3;

    // get counts 
    i1.getcount();
    i2.getcount();
    i3.getcount();


    // data is saved and count is increase 
    i1.get_data(100);
    i2.get_data(200);
    i3.get_data(300);

    cout << "\nAfter reading data..." << endl;

    // reading count 
    i1.getcount();
    i2.getcount();
    i3.getcount();

    return 0;
}