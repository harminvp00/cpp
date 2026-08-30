/*
    practical 7: static variable and function
    (ii) Write a C++ program to show the use of static data member and static member function.
*/

#include<iostream>
using namespace std;

class test
{
    int code;
    static int count;

    public:
    void setcode()
    {
        code= ++count;
    }

    void showcode()
    {
        cout << "object number: " << code << endl;
    }

    static void showcount()
    {
        cout << "count : " << count << endl;
    }
};

int test :: count;

int main()
{
    // class object 
    test t1,t2;

    // set code 1 + count 
    t1.setcode();
    t2.setcode();

    // print count functions 
    test :: showcount();

    // class objects 
    test t3;
    t3.setcode();

    
    test :: showcount();

    t1.showcode();
    t2.showcode();
    t3.showcode();

    return 0; 
}