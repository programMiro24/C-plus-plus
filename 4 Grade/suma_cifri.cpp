#include<iostream>
using namespace std;
int main()
{
    int n,s,d,e;
    cin>>n;
    s=n/100;
    n=n%100;
    d=n/10;
    e=n%10;
    cout<<s+d+e<<endl;
    return 0;

}
