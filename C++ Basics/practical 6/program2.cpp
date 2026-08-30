/*
    practical 6: Array of object
    (ii) Write a C++ program using array of objects to compare SPI of 10 different 
         students and print whose SPI is highest.
*/

#include<iostream>
using namespace std;

class student
{
    public:
    string name;
    float spi;

    void set(string n, float s)
    {
        name= n;
        spi= s;
    }
};

int main()
{
    student s[10];

    for(int i=0; i<10; i++)
    {
        string name;
        float spi;

        cout << "Enter name of student " << i+1 << ": ";
        cin >> name;
        cout << "Enter spi of student " << i+1 << ": ";
        cin >> spi;
        s[i].set(name,spi);
    }

    float max = s[0].spi;
    int max_index= 0;

    for(int i=1; i<10; i++)
    {
        if(s[i].spi > max)
        {
            max= s[i].spi;
            max_index =i;
        }
    }

    cout << "The student with highest spi is : " << s[max_index].name << endl;
    cout << "their spi is : " << s[max_index].spi << endl;

    return 0;
}