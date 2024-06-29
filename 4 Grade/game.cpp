#include<iostream>
using namespace std;
int main()
{
    int a,b,bik,cr,h,s,d,e,h2,s2,d2,e2;
    cin>>a>>b;
    bik=0;
    cr=0;
    h=a/1000;
    a=a%1000;
    s=a/100;
    a=a%100;
    d=a/10;
    e=a%10;

    h2=b/1000;
    b=b%1000;
    s2=b/100;
    b=b%100;
    d2=b/10;
    e2=b%10;

    if(h==s2)cr++;
    if(h==d2)cr++;
    if(h==e2)cr++;

    if(s==h2)cr++;
    if(s==d2)cr++;
    if(s==e2)cr++;

    if(d==h2)cr++;
    if(d==s2)cr++;
    if(d==e2)cr++;

    if(e==h2)cr++;
    if(e==s2)cr++;
    if(e==d2)cr++;

    if(h==h2)bik=bik+1;
    if(s==s2)bik=bik+1;
    if(d==d2)bik=bik+1;
    if(e==e2)bik=bik+1;

    if(bik==1)cout<<bik<<" "<<"bik";
    else cout<<bik<<" "<<"bikove";

   if(cr==1)cout<<" "<<cr<<" "<<"crava";
   else cout<<cr<<" "<<"cravi";


    return 0;

}
