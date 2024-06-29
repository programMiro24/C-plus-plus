#include<iostream>
using namespace std;
int main()
{
    int ch1,ch2,h,s,d,e;
    cin>>ch1>>ch2;
    h=ch1/1000;
    ch1=ch1%1000;
    s=ch1/100;
    ch1=ch1%100;
    d=ch1/10;
    e=ch1%10;
    ch1=h*10+e;
    h=ch2/1000;
    ch2=ch2%1000;
    s=ch2/100;
    ch2=ch2%100;
    d=ch2/10;
    e=ch2%10;
    ch2=h*10+e;
    cout<<ch1+ch2<<endl;
    return 0;

}
