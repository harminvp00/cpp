/*
    practical 2:  Operators, Control Structure and Array
    (v) write a program to print global and local variable using scope resolution operator.
*/
#include<iostream>
using namespace std;

int num;  // integer num as global variable

int main()
{
    int num;    // integer num as local variable

    cout << "Enter value of global variable : ";
    cin >> ::num;
    cout << "Enter value of local variable : ";
    cin >> num;

    cout << "value of global variable : " << ::num << endl;
    cout << "value of local variable : " << num << endl;

    return 0;
}
