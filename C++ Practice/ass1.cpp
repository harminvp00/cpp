// Describe the call by reference and return by reference with example 

#include<iostream>
using namespace std;

/* Call By Reference */
void swap(int &x, int &y)
{
   int temp = x;
    x = y;
    y = temp;
}

/* Return By Reference */
int &maximum(int &a, int &b)
{
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

// int main function
int main()
{
    int n1, n2;

    cout << "Enter two numbers : ";
    cin >> n1 >> n2;

    int max;

    max = maximum(n1,n2);
    swap(n1, n2);

    cout << "The Maximum Number of Given two Number is : " << max << endl;
    cout << "The Swapping of Given two Number is : " << n1 << " " << n2 << endl;



    return 0;
}