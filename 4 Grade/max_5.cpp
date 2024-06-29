#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,m;
    cin>>a>>b>>c>>d>>e;
    m=a;
    if(b>m)m=b;
    if(c>m)m=c;
    if(d>m)m=d;
    if(e>m)m=e;
    cout<<m<<endl;
    return 0;
}
