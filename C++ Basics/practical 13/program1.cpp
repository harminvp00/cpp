/*
    practical 13: File Operations
    (i) Write a Program to read a text file and count number of characters in it.
*/
#include<iostream>
#include<fstream>
using namespace std;

int main()
{

    fstream f1; // file object 
    int count=0; // variable which count the number of the character
    char ch; // represent the each character

    // open file using f1 file object  
    f1.open("file1.txt", ios::in);

    // use get method to get characters
    while(f1.get(ch))
    {
        // print characters 
        cout << ch;
        count++; // count characters 
    }
    
    // print count -- the final total number of the character into the file 
    cout << "\nNo. of character in file : " << count << endl;
    return 0;
}