#include<iostream>
using namespace std;

class stack{

    int stek[5];
    int tos;

    public:
    stack() // constructor
    {
        tos=0;
        cout << "\nstack size ";
    }

    ~stack();               //destructor definition
    void push(int i);       //member function definition
    int pop();              //member function definition

};

 stack :: ~stack()      //destructor declaration
{
    cout << "\ndestructor call..." << endl;
}

void stack :: push(int i)       // push member function
{
    if(tos==5)
    {
        cout << "stack is full";
        return;
    }
    stek[tos]=i;
    tos++;
}

int stack :: pop()      // pop member function
{
    if(tos==0)
    {
        cout << "stack is under flow...";
        return tos;
    }
    tos--;
    return stek[tos];
}

int main()
{
    stack x,y;

    // value for x object
    x.push(21);
    x.push(43);
    x.push(19);
    x.push(16);
    x.push(41);

    // value for y object
    y.push(27);
    y.push(51);
    y.push(49);
    y.push(14);
    y.push(89);

    cout << "\n" << x.pop();
    cout << "\n" << x.pop();
    cout << "\n" << x.pop();
    cout << "\n" << x.pop();
    cout << "\n" << x.pop();
     
    return 0;
}