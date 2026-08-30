/*
        practical 2:  Operators, Control Structure and Array 
        (i) write a program to perform all arithmetic operation on two integers scanned from user.
*/
#include<iostream>
using namespace std;

int main()
{
    int num1, num2;

    cout << "Enter two integer numbers : ";
    cin >> num1 >> num2;

    int ch, result; 
    cout << "1. addition" << endl;
    cout << "2. substraction" << endl;
    cout << "3. multipliaction" << endl;
    cout << "4. division" << endl;
    cout << "5. reminder" << endl;
    cout << "select choice : ";
    cin >> ch;

    switch(ch)
    {
        case 1: result = num1 + num2;
                cout << "addition of " << num1 << " and " << num2 << " is " << result << endl;
                break;
        
        case 2: result = num1 - num2;
                cout << "substraction of " << num1 << " and " << num2 << " is " << result << endl;
                break;
        
        case 3: result = num1 * num2;
                cout << "multiplication of " << num1 << " and " << num2 << " is " << result << endl;
                break;
        
        case 4: result = num1 / num2;
                cout << "division of " << num1 << " and " << num2 << " is " << result << endl;
                break;
        
        case 5: result = num1 % num2;
                cout << "reminder of " << num1 << " and " << num2 << " is " << result << endl;
                break;

       default: "wrong choice enter...";
                break; 
    }

    return 0;
}