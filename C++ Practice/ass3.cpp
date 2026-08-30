#include<iostream>
using namespace std;

int sum(int a, int b){
    return a+b;
}

float sum(float a, float b){
    return a+b;
}

int main(){

    int x,y, ans1;
    cout << "Enter integer two number : ";
    cin >> x >> y;
    ans1 = sum(x, y);
    cout << "total sum of integer numbers is " << ans1 << endl;
    
    float m,n, ans2;
    cout << "Enter floating two number : ";
    cin >> m >> n;
    ans2 = sum(m, n);
    cout << "total sum of floating numbers is " << ans2 << endl;
    
    return 0;
}