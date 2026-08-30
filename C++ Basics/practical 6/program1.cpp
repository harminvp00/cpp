/*
    practical 6: Array of object
    (i) Create a class called 'EMPLOYEE' that has - EMPCODE and EMPNAME as data members - member function getdata() 
        to input data - member function display() to output data Write a main function to create EMP, an array of 
        EMPLOYEE objects. Accept and display the details of at least 6 employees
*/

#include<iostream>
using namespace std;

class employee
{
    // variables 
    int empcode;
    char empname[80];

    // declarations 
    public:
    void get_data();
    void put_data();
};

void employee :: get_data()
{
    cout << "Enter employee code: ";
    cin >> empcode;
    cout << "Enter employee name: ";
    cin >> empname;
}

void employee :: put_data()
{
    cout << "Employee code: " << empcode << endl;
    cout << "employee name: " << empname << endl;
}

int main()
{
    employee e1;
    for(int i=1; i<=6; i++)
    {
        cout << "Enter detail of employee " << i << endl;
        e1.get_data();
    }

    cout << endl;
    for(int i=1; i<=6; i++)
    {
        cout << "Detail of employee " << i << endl;
        e1.put_data();
    }

    return 0;
}