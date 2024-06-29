#include<iostream>
using namespace std;
int main()
{
    int n,x,s,d,e;
    cin>>n;
    x=n/1000;
    n=n%1000;
    s=n/100;
    n=n%100;
    d=n/10;
    e=n%10;
    cout<<x+s+d+e;
    return 0;
}
