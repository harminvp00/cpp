#include<iostream>
using namespace std;

int main()
{
    char operation[50]="Addition and Avarage of two numbers...";
    int num1,num2;
    float add,avg;

    cout << operation << endl;
    cout << "\nEnter first number : ";
    cin >> num1;
    cout << "Enter second number : ";
    cin >> num2;

    add = num1+num2;
    avg = add/2;

    cout << "\nAddition Result :- " << add;
    cout << "\nAverage Result :- " << avg;

    return 0;
}