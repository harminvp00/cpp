/*
    practical 12: this pointer and Polymorphism
    (i) Write a C++ Program that shows use of this pointer
*/
#include<iostream>
using namespace std;

class abc
{
    private:
    int num;

    public:
    void get_num(int a)
    {
        this-> num = a;
    }

    void print_num()
    {
        cout << "number's value : " << this-> num << endl;
    }

    void address()
    {
        cout << "number's address : " << this << endl;
    }
};

int main()
{
    abc A;

    A.get_num(512);
    A.print_num();
    A.address();

    return 0;
}
