/*
    practical 4: functions
    (i) write a c++ program to sort two numbers using call by reference.
*/
#include<iostream>
using namespace std;

int sort(int &a, int &b)
{
    if(a>b)
    {
        int temp=a;
            a=b;
            b=temp;
    }
}


int main()
{
    int num1, num2;

    cout << "Enter two number : ";
    cin >> num1 >> num2;

    cout << "Before swapping numbers " << num1 << " and " << num2 << endl;
    sort(num1, num2);
    cout << "After swapping numbers " << num1 << " and " << num2 << endl;

    return 0;
}