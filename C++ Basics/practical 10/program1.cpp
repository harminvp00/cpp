/*
    practical 10 : Constructor and Destructor
    (i) create a class called distance that has a separate integer member data for feet and inches. one consturctor
    should initialize this data to zero and another should initialize it to fixed values. A member function should
    display it in feet and inches format.
*/

#include<iostream>
using namespace std;

class distance1        // class distance
{
    
    int feet;
    int inche;      //data members

    public:

    distance1()       //constructor 1
    {
        feet=0;
        inche=0;
    }

    distance1(int x, int y)      //constructor 2
    {
        feet = x;
        inche = y;
    }

    void getdata();
};


void distance1 :: getdata()
{
    
        cout << "feet = " << feet << endl;
        cout << "inches = " << inche << endl;
   
}

int main()
{
    distance1 d1; 
    distance1 d2(13,17);

    cout << "defult constructor" << endl;
    d1.getdata();
    cout << "parameterized constructor" << endl;
    d2.getdata();

    return 0;
}