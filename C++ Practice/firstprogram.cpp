#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const char FileName[] = "text.txt";

int main () 
{
string line;
ifstream inMyStream (FileName); 
int c;

if (inMyStream.is_open()) 
{

     while(  getline (inMyStream, line)){

             cout<<line<<endl;
              c++;
  }
    }
    inMyStream.close(); 

system("pause");
   return 0;
}