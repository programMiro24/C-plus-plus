#include<iostream>
using namespace std;
int main()
{
    int d,m,g,n,r;
    cin>>d>>m>>g>>n;
    if(m==2)
           if((g%4==0&&g%100!=0)||(g%400==0))r=29;
           else r=28;
    else if(m==4||m==6||m==9||m==11)r=30;
         else r=31;
    d=d+n;
    if(d>r)
        if(m==12){m=1;g=g+1;d=d-r;}
        else {m++;d=d-r;}
    cout<<d<<" "<<m<<" "<<g<<endl;
}

