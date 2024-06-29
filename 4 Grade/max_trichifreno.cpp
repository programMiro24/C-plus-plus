#include<iostream>
using namespace std;
int main()
{
    int n,s,d,e,min,max,sr;
    cin>>n;
    s=n/100;
    n=n%100;
    d=n/10;
    e=n%10;
    max=s;
    if(d>max)max=d;
    if(e>max)max=e;
    min=s;
    if(d<min)min=d;
    if(e<min)min=e;
    sr=s+d+e-min-max;
    cout<<max<<sr<<min;
    return 0;
}
