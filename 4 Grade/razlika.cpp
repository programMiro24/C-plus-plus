#include<iostream>
using namespace std;
int main()
{
    int n,s,d,e,ng,nm;
    cin>>n;
    s=n/100;
    n=n%100;
    d=n/10;
    e=n%10;
    if(s<d)swap(s,d);
    if(s<e)swap(s,e);
    if(d<e)swap(d,e);
    ng=s*100+d*10+e;
    if(d==0)swap(e,s);
    else if(e==0)swap(d,e);
    nm=e*100+d*10+s;
    cout<<ng-nm;
    return 0;

}
