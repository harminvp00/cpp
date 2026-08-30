



#include <iostream>
#include <fstream>
using namespace std;

const string FileName = "content.txt";

int main () 
{
    string data;
    ifstream inMyStream(FileName); 
    int counter = 0;

    if (inMyStream.is_open()) {
        while(getline(inMyStream, data)){
            cout << "Data Written into the file is : \"";
            cout << data;
            cout << "\"" << endl;
            counter++;
        }
    }
    inMyStream.close(); 
    return 0;
}