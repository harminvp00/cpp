#include<iostream>
#include<fstream>

using namespace std;

int main()
{
        char data[100];

        ifstream  fin("xyz.txt",ios::out);
        cout << "enter data in file : ";
        cin.get(data, 100);

        char ch;
        int i, c=0, sp=0;
        while(fin)
        {
                fin.get(ch);
                i=ch;
                if((i > 63 && i < 91) || (i > 96 && i < 123))
                        c++;
                else
                        if(ch== ' ')
                                sp++;
        }
        cout<<"\n No. of Characters in a File : "<<c;
      
        return 0;
}