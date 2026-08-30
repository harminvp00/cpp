/*
    practical 5: class and object
    (ii) Given that an EMPLOYEE class contains following members: Employee number, Employee name, 
        Basic, DA, IT, Net Salary and print data members using Object.
*/

#include<iostream>
using namespace std;

class employee
{
    int number;
    char name[80];
    float basic;
    float da;
    float it;
    float net_salary;

    public:
    void input();
    void output();
};

void employee :: input()
{
    cout << "Enter employee number: ";
    cin >> number;
    cout << "Enter employee name: ";
    cin >> name;
    cout << "Enter employee's basic salary: ";
    cin >> basic;
    cout << "Enter employee's daily allowance: ";
    cin >> da;
    cout << "Enter employee's income tax: ";
    cin >> it;
    cout << "Enter employee's net salary: ";
    cin >> net_salary;
}

void employee :: output()
{
    cout << "\nEmployee data" << endl;
    cout << "Employee number: " << number << endl;
    cout << "Employee name: " << name << endl;
    cout << "Employee's basic salary: " << basic << endl;
    cout << "Employee's daily allowance: " << da << endl;
    cout << "Employee's income tax: " << it << endl;
    cout << "Employee's net salary: " << net_salary << endl;
}

int main()
{
    employee e;
    e.input();
    e.output();
    return 0;
}