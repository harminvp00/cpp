#include<iostream>
#include<iomanip>

using namespace std;


class _1
{
    protected:
    int v1,v2;
    float max_value;
    float min_value;

    public:

    void getValue(int x, int y)
    {
        v1=x; v2=y;
    }

    void max_and_min()
    {
        if(v1>v2)
        {
            max_value=v1;
            min_value=v2;
        }
        else
        {
            max_value=v2;
            min_value=v1;
        }
    }


};

class _2: public _1
{
   public:
    void result()
    {
        cout << "value 1 = " << v1 << endl;
        cout << "value 2 = " << v2 << endl;
        cout << "max value = " << max_value << endl;
        cout << "min value = " << min_value << endl;
    }

};
 
int main()
{
    cout << "\n\n";
    cout << setw(70) << "WELCOME MAKE YOUR CODE HERE !!!\n" << endl;
    

    int n;

    cout << "\nEnter value of n: ";
    cin >> n;

    // i represent to the row |---------| j represent to the coloumn //
    cout << "\nnumber stairs...\n";
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout << j;
        }
    cout << endl;
    }
    

   // creating object for class _2
    _2 obj;

    // declaring variable to achieve dynamic initiaization
    int value1,value2;

    // get input from user
    cout << "Enter two values: ";
    cin >> value1 >> value2;

    // initialize v1 and v2
    obj.getValue(value1,value2);

    // findind max and min for v1,v2
    obj.max_and_min();

    // print result of function max_and_min
    obj.result();





    return 0;
}