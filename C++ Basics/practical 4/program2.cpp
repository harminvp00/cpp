/*
    practical 4: function
    (ii) Write a C++ program to multiply two numbers using inline function.
*/

#include<iostream>
using namespace std;

inline int multiply(int a, int b) {
    return a*b;
}


int main()
{
    int n1,n2;
    cout << "Enter two numbers : ";
    cin >> n1 >> n2;

    int ans = multiply(n1,n2);

    cout << "Multiplication of " << n1 << " and " << n2 << " is " << ans << endl;

    return 0;
}