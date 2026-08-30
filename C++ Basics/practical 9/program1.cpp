/*
    practical 9:
    (i) create a class 'COMPLEX' to hold a complex number. Write a friend function to add two complex numbers.
        write a main function to add two COMPLEX objects.
*/

#include<iostream>
using namespace std;

class complex
{
    float a,b;

    public:

    void input(float real, float imag)
    {
        a = real;
        b = imag;
    }

    friend complex sum(complex, complex);

    void show(complex);
};

complex sum (complex c1, complex c2)
{
    complex c3;
    c3.a = c1.a + c2.a;
    c3.b = c1.b + c2.b;

    return (c3);
}

void complex :: show(complex c)
{
    cout << c.a << " + j" << c.b << endl;
}

int main()
{
    complex A,B,C;

    A.input(3.1, 5.65);
    B.input(2.75, 1.2);

    C=sum(A,B);

    cout << "A = "; A.show(A);
    cout << "B = "; B.show(B);
    cout << "C = "; C.show(C);

    return 0;
}