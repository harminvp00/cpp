/*
    practical 4: function
    (iv) Write a program to overload the max function.
        (1) Find the max number from three numbers.
        (2) Find the max string from three strings.
*/

#include<iostream>
#include<string>
using namespace std;

int max(int n1, int n2, int n3)
{
    int max_num=n1;

    if(n2>n1 && n2>n3)
    {
        max_num=n2;
    }
    if(n3>n1 && n3>n2)
    {
        max_num=n3;
    }
    return max_num;
}

string max(string str1, string str2, string str3)
{
    string max_str= str1;
    
    if(str2>str1 && str2>str3)
    {
        max_str= str2;
    }
    if(str3>str1 && str3>str2)
    {
        max_str= str3;
    }
    return max_str;
}

int main()
{
    // finding max number from three numbers
    int num1,num2,num3;
    cout << "Enter three numbers : ";
    cin >> num1 >> num2 >> num3;
    int max_number= max(num1, num2, num3);
    cout << "max number is " << max_number << endl;

    // finding max string from three strings
    string s1,s2,s3;
    cout << "Enter three strings : ";
    cin >> s1 >> s2 >> s3;
    string max_string= max(s1, s2, s3);
    cout << "max number is " << max_string << endl;

    return 0;

}

