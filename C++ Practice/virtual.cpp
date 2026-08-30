#include<iostream>
using namespace std;

class first
{
    protected:
    int enrollment;

    public:
    void get_num(int e)
    {
        enrollment = e;
    }

    void show_num()
    {
        cout << "Enrollment Number : 22623030" << enrollment << endl;
    }
};

class second1 : virtual public first
{
    protected:
    int mid1, mid2, avg;

    public:
    void enter_marks(int x, int y)
    {
        mid1 = x;
        mid2 = y;
        avg= (mid1+mid2)/2;
    }

    void view_marks()
    {
        cout << "Mark In Mid Exam" << endl;
        cout << "Mid exam 1 marks = " << mid1 << endl; 
        cout << "Mid exam 2 marks = " << mid2 << endl;
        cout << "Marks in mid exam = " << avg << endl; 
    }
};

class second2 : public virtual  first
{
    protected:
    int mini_project;

    public:
    void project_marks(int p)
    {
        mini_project=p;
    }

    void display()
    {
        cout << "Micro Project Marks : " << mini_project << endl;
    }
};

class three : public second1, public second2
{
    float collage_level;

    public:
    void print();
};

void three :: print()
{
    collage_level= avg + mini_project;

    show_num();
    view_marks();
    display();
    cout << "Total Mark Internal Exam : " << collage_level << endl;
};

int main()
{
    three th;

    th.get_num(7217);
    th.enter_marks(15,17);
    th.project_marks(8);
    th.print();
}


