#include<iostream>
using namespace std;
int main()
{
    int n,m,s,vz,min,p;
    int i;
    cin>>n;
    cin>>m>>s>>vz;
    s=m*60+s+(5-vz)*30;
    min=s; p=1;
    for(i=2;i<=n;i++)
    {
      cin>>m>>s>>vz;
      s=m*60+s+(5-vz)*30;
      if(s<min){min=s; p=i;}
    }
    m=min/60;s=min%60;
    cout<<endl;
    cout<<"Pobeditel e nomer:"<<p<<endl;
    cout<<endl;
    cout<<"Vremeto na pobeditelya e:"<<" "<<m<<" "<<"min"<<" "<<s<<" "<<"sek"<<endl;
    cout<<endl;
     return 0;
}
