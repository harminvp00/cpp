/*
    practical 2:  Operators, Control Structure and Array
    (iii) write a program to print whether a number entered by user is a prime number or not.
*/
#include<iostream>
using namespace std;

int main()
{
    int i, n, flag=0;

    cout << "Enter a integer number : ";
    cin >> n;

    if(n==0 || n==1)
    {
        flag=1;
    }

    for(i=2; i<=n/2; i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }

    if(flag == 0)
    {
        cout << n << " is a prime number.";
    }
    else
    {
        cout << n << " is not a prime number.";
    }

    return 0;
}