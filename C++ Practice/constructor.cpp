#include<iostream>
using namespace std;

class distance        // class distance
{
    
    int feet;
    int inche;      //data members

    public:

    distance()       //constructor 1
    {
        feet=0;
        inche=0;
    }

    distance(int x, int y)      //constructor 2
    {
        feet = x;
        inche = y;
    }

    void getdata();
};


void distance :: getdata()
{
    cout << "feet = " << feet << endl;
    cout << "inches = " << inche << endl;
}

int main()
{
    class distance d1; 
    class distance d2(13,17);

    cout << "defult constructor" << endl;
    d1.getdata();
    cout << "parameterized constructor" << endl;
    d2.getdata();

    return 0;
}