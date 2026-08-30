#include<iostream>
using namespace std;

class abstract
{
    protected:
    char name[15];
    int num;
    float cost;

    public:
    virtual void getdata() = 0;
    virtual void putdata() = 0;
};

class table : public abstract
{
    public:
    void getdata()
    {
        cout << endl;
        cin >> name;
        cin >> num;
        cin >> cost;
    }
    void putdata()
    {
        cout << "\nitem name : " << name;
        cout << "\nitem number : " << num;
        cout << "\nitem price : " << (float) cost;
    }
};

class chair : public abstract
{
    public:
    void getdata()
    {
        cout << endl;
        cin >> name;
        cin >> num;
        cin >> cost;
    }
    void putdata()
    {
        cout << "\nitem name : " << name;
        cout << "\nitem number : " << num;
        cout << "\nitem price : " << (float) cost;
    }
};

int main()
{
    // table 
    table tbl;
    cout << "\nTable inforation...//";
    tbl.getdata();
    tbl.putdata();

    // chair 
    chair cai;
    cout << "\n\nChair inforation...//";
    cai.getdata();
    cai.putdata();
    return 0;
}