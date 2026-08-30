/*
    practical 3: Manipulators
    (i) write a program to convert km to cm, meter, inch, and feet using manipulators endl, setw, 
    setfill, setprecision.
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double km, cm, m, inches, feet;

    cout << "Enter distance in kilometers : ";
    cin >> km;

    // convert kilometers into other units
    cm = km * 100000;
    m = km * 1000;
    inches = km * 39370.1;
    feet = km * 3280.84;

    cout << setprecision(2) << fixed;
    cout << setw(14) << "centimeters = " << setfill('&') << setw(10) << cm << endl;
    cout << setw(14) << "meters = " << setfill('@') << setw(10) << m << endl;
    cout << setw(14) << "inches = " << setfill('#') << setw(10) << inches << endl;
    cout << setw(14) << "feet = " << setfill('$') << setw(10) << feet << endl;

    return 0;
}