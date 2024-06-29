#include<iostream>
using namespace std;
int main()
{
    int n,s,d,e,on;
    cin>>n;
    s=n/100;
    n=n%100;
    d=n/10;
    e=n%10;
    n=s*100+d*10+e;
    on=e*100+d*10+s;
    cout<<n+on<<endl;
    return 0;

}
