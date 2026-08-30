/*
    practical 8:
    (ii) Create a class Time that displays time in hour and minute form. Create a method 
    total Time() which takes two Time objects as an argument and returns a new object of 
    Time displaying total of both Time objects 
*/

#include<iostream>
using namespace std;

class time
{
    int hours, minutes;

    public:
    void get_time(int i, int j)
    {
        hours = i;
        minutes = j;
    }

    void put_time()
    {
        cout << hours << " hours and ";
        cout << minutes << " minutes" << endl;
    }

    void sum(time, time);
};

void time :: sum(time t1, time t2)
{
    minutes = t1.minutes + t2.minutes;
    hours =  minutes/60;
    minutes = minutes%60;
    hours = hours + t1.hours + t2.hours;
}

int main()
{
    time t1,t2,t3;

    t1.get_time(4,35);
    t2.get_time(5,25);

    t3.sum(t1,t2);

    cout << "T1 object = "; t1.put_time();
    cout << "T2 object = "; t2.put_time();
    cout << "T3 object = "; t3.put_time();

    return 0;
}