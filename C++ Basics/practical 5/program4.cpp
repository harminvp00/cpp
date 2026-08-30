/*
    practical 5:
    (iv) Write a C++ program to enter number and cost of a class item using get data() and using put data() 
    to display data. Write get data() outside the class item.
*/

#include<iostream>
using namespace std;

class item
{
    int number;
    float cost;

    public:
    void get_data();
    void put_data()
    {
        cout << "item number: " << number << endl;
        cout << "item cost: " << cost << endl;
    }
};

void item :: get_data()
{
    cout << "Enter item number: ";
    cin >> number;
    cout << "Enter item cost: ";
    cin >> cost;
}

int main()
{
    item i1;

    i1.get_data();
    i1.put_data();

    return 0;
}