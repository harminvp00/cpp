#include<iostream>
using namespace std;

// failed code
class BC
{
    public:
    int b;
    void show(){
        cout << "b = " << b << endl;
    }
};

class DC : public BC
{
    public:
    int d;
    void show()
    {
        cout << "d = " << d << endl;
    }
};

int main()
{
    BC *bptr;
    BC bc;
    bptr = &bc;
    DC dc;
    bc.show();
    dc.show();  

    return 0;  
}