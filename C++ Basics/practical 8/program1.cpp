/*
    practical 8:
    (i) create a 'DISTANCE' class with :- feet and inches as data members
        a. member function to input data
        b. member function to output data
        c. member function to add two distance objects
        d. write a main function to create objects of DISTANCE class. input two distance and output the sum.
*/

#include<iostream>
using namespace std;

class distance1
{
   int feet;
   int inches;

   public:

//    input the distance 
   void input(int a, int b)
   {
     feet = a;
     inches = b;
   }
   
//    output the distance 
   void output()
   {
      cout << feet << " feet and ";
      cout << inches << " inches" << endl;
   }

   void sum(distance1, distance1);

};

void distance1 :: sum(distance1 d1, distance1 d2) // object as an argument
{
    int total;
    feet = d1.feet + d2.feet;
    inches = d1.inches + d2.inches;
    total = feet + inches;
}

int main()
{
    distance1 d1,d2,d3;

    d1.input(12,14);
    d2.input(25,27);

    d3.sum(d1,d2);

    cout << "d1 = "; d1.output();
    cout << "d2 = "; d2.output();
    cout << "d3 = "; d3.output();
    
    return 0;
}