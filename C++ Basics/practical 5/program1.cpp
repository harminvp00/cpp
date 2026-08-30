/*
    practical 5: class and object
    (i) Write a c++ program to declare structure of college_info like college_name, college_code, 
        dept,intake, initialize and display contents of member variables.
*/
#include<iostream>
using namespace std;

struct collage
{
    char name[80];
    int code;
    char dept[80];
    int intake;
};

int main()
{
    struct collage c;
    cout << "Enter collage name: ";
    cin >> c.name;
    cout << "Enter collage code: ";
    cin >> c.code;
    cout << "Enter name of department: ";
    cin >> c.dept;
    cout << "Enter collage intake: ";
    cin >> c.intake;

    cout << "\nCollage Data " << endl;
    cout << "collage name: " << c.name << endl;
    cout << "collage code: " << c.code << endl;
    cout << "collage department: " << c.dept << endl;
    cout << "collage intake: " << c.intake << endl;

    return 0;
}