/*
    practical 4: function
    (iii) Write a C++ program to find area of circle using formula pi*r 2 . 
          take the value of pi as default argument in function.
*/

#include<iostream>
using namespace std;

float circle(float r, float pi=3.14)
{
    return pi*r*r;
}

int main()
{
    float radius;
    cout << "Enter radius of circle : ";
    cin >> radius;

    float area = circle(radius);
    cout << "Area of circle is : " << area << endl;

    return 0;
}