#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    if(a<b)swap(a,b);
    if(a<c)swap(a,c);
    if(a<d)swap(a,d);
    if(a<e)swap(a,e);
    if(b<c)swap(b,c);
    if(b<d)swap(b,d);
    if(b<e)swap(b,e);
    if(c<d)swap(c,d);
    if(c<e)swap(c,e);
    if(d<e)swap(d,e);
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;
    return 0;

}




