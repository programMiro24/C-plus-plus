#include<iostream>
using namespace std;
int a[25],n;
void read_masiv(int *a,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
}
void Preobrazuvai(int *a,int n)
{
    int s,d,e,sum=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<100)
        {
            d=a[i]/10;
            e=a[i]%10;
            sum=d+e;
            cout<<sum<<" ";
            sum=0;
        }
        else
        {
            s=a[i]/100;
            a[i]%=100
            d=a[i]/10;
            e=a[i]%10;
            sum=s+d+e;
            cout<<sum<<" ";
            sum=0;
        }
    }
}
int main()
{
    cin>>n;
    read_masiv(a,n);
    Preobrazuvai(a,n);
    cout<<endl;
}
