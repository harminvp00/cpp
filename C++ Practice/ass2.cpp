#include<iostream>
using namespace std;

int overload(int l, int w)
{
    return l*w;      // area of square
}

int overload(long int a, long int b) 
{
    return (1/2)*a*b;   // area of triangle
}

float overload(float r, float pi=3.14)
{
    return pi*r*r;   // area of circle
}


int main()
{
    int length, width;
    cout << "Enter length and width : ";
    cin >> length >> width;
    int x = overload(length, width);
    cout << "Area of square : " << x << endl;

    int height;
    cout << "Enter height : ";
    cin >> height;
    x = overload(length, height);
    cout << "Area of triangle : " << x << endl;

    float radius;
    cout << "Enter radius : ";
    cin >> radius;
    float y = overload(radius);
    cout << "Area of circle : " << y << endl;


    return 0;
}