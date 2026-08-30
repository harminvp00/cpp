/*
    practical 2:  Operators, Control Structure and Array
    (iv) write a program to find sum and average of 10 numbers and sort elements of 1D array in Ascending order.
 */
#include<iostream>
using namespace std;

int main()
{
    int numbers[10],sum=0;
    float average=0.0;

    cout << "Enter 10 Numbers : " << endl;
    
    for(int i=0; i<10; i++)
    {
        cin >> numbers[i];
        sum = sum + numbers[i];
    }
    average = (float)sum/10;
    
    cout << "sum = " << sum << endl;
    cout << "average = " << average << endl;

    for(int i=0; i<10; i++)
    {
        for(int j=i+1; j<10; j++)
        {
            if(numbers[i] > numbers[j])
            {
            int temp = numbers[i];
            numbers[i] = numbers[j];
            numbers[j] = temp;
            }
        }
    }
    cout << "Sorted numbers in Ascending order : " << endl;

    for(int i=0; i<10; i++)
    {
        cout << numbers[i] << " ";
    }

    return 0;
}