/*
    practical 12: this pointer and Polymorphism
    (ii) Define a class vehicle. Inherit vehicle into two-wheelers and four-wheelers. Inherit two-wheelers 
         into bicycle and scooters. Inherit four-wheelers into diesel vehicles and petrol vehicles. Provide 
         a virtual function that calculates the mileage of the vehicles
*/

#include<iostream>
using namespace std;

class vehicle
{
    public:
    virtual float mileage() = 0;
};

class two_wheeler : public vehicle
{
    protected:
    float mileage1, mileage2;
    public:
    virtual float mileage()
    {
        return 0.0f;
    }
};

class bicycle : public two_wheeler
{
    public:
    virtual float mileage(float m1)
    {
        mileage1= m1;
        return mileage1;
    }
};

class scooter : public two_wheeler
{
    public:
    virtual float mileage(float m2)
    {
        mileage2= m2;
        return mileage2;
    }
};

class four_wheeler : public vehicle
{
    protected:
    float petrol, diasel;
    public:
    virtual float mileage()
    {
        return 0.0f;
    }
};

class diasel_vehicle : public four_wheeler
{
    public:
    virtual float mileage(float p)
    {
        petrol=p;
        return petrol;
    }
};

class petrol_vehicle : public four_wheeler
{
    public:
    virtual float mileage(float d)
    {
        diasel = d;
        return diasel;
    }
};

int main()
{
    bicycle b;
    scooter s;
    diasel_vehicle dv;
    petrol_vehicle pv;

    cout << "bicycle mileage : " << b.mileage(9.01) << endl;
    cout << "scooter mileage : " << s.mileage(11.19) << endl;
    cout << "diesel vehicle mileage : " << dv.mileage(30.12) << endl;
    cout << "petrol vehicle mileage : " << pv.mileage(25.13) << endl;

    return 0;
}
