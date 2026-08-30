/*
    practical 5: class and objects
    (iii) Write a program (using class and object) to convert distance in centimetre entered by 
          user into inches, feet, meter and kilometre.
*/

#include<iostream>
using namespace std;

class distance_convert
{
    public:
    float centimeters;

    void set_cm(float cm) {
        centimeters= cm;
    }

    float inches() {
        return centimeters/2.54;
    }

    float feet() {
        return inches()/12;
    }

    float meters() {
        return centimeters/100;
    }

    float kilometers() {
        return meters() / 1000;
    }
};

int main()
{
    distance_convert d1;
    float centimeters;
    cout << "Enter distance in centimeters: ";
    cin >> centimeters;

    d1.set_cm(centimeters);

    cout << "Inches: " << d1.inches() << endl;
    cout << "Feet: " << d1.feet() << endl;
    cout << "Meters: " << d1.meters() << endl;
    cout << "Kilometers: " << d1.kilometers() << endl;

    return 0;
}