#include<iostream>
using namespace std;
int NOD(long long a,long long b)
{
    int ost;
    while(b!=0)
    {
        ost=a%b;
        a=b;
        b=ost;
    }
    return a;
}
int main()
{
    long long i,a[4],NOK,d1;
    for(i=0;i<4;i++)
    {
        cin>>a[i];
    }
    d1=a[0];
    for(i=1;i<4;i++)
    {
    NOK=(d1*a[i])/NOD(d1,a[i]);
    d1=NOK;
    }
    cout<<NOK<<endl;
}
