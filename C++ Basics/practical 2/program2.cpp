/* 
    practical 2:  Operators, Control Structure and Array
    (ii) write a program to print following pattern using for loop.
        1
       2 3
      4 5 6
     7 8 9 0        */

#include<iostream>
using namespace std;

int main()
{
    int num=1, n=4; // n=rows
    int i,j,k;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n-i; j++)
        {
            cout << " ";
        }

        for(k=1; k<=i; k++)
        {
            cout << num << " ";
            num++;

            if(num>9)
            {
                num=0;
            }
        }
    cout << endl;
    }
    return 0;
}