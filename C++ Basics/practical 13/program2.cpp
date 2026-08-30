/*
    practical 13: File Operations
    (ii) Write a Program to read a text file and copy it to another text file
*/
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    // Input file streams object    
    ifstream f1("file1.txt");

    // Output file stream object 
    ofstream f2("file2.txt");

    // string vatriable 
    string str;

    cout << "file 1 : ";
    // print data of the file 1 into the string variable
    getline(f1, str);

    // print string variable data which was get from the file 1 
    cout << str;

    // tranfer string content into the f2 
    f2 << str;

    // print acknowledgement of data copying from f1 to f2 file objects 
    cout << "\nfile 1 data is successfully copied into file 2";


    // close the both f1 , f2 
    f1.close();
    f2.close();
    return 0;
}