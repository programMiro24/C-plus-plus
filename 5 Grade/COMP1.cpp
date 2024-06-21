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
    int s=0,d=0,e;
    for(int i=0;i<n;i++)
    {
        if(a[i]<10)
        {
            e=a[i]; s=0; d=0;
        }
        if(a[i]<100&&a[i]>10)
        {
            d=a[i]/10;
            e=a[i]%10; s=0;

        }
        if(a[i]>99)
        {
            s=a[i]/100;
            a[i]%=100;
            d=a[i]/10;
            e=a[i]%10;
        }

         if(s==d&&d==e)cout<<i+1<<" ";
    }
}
int main()
{
    cin>>n;
    read_masiv(a,n);
    Preobrazuvai(a,n);
    cout<<endl;
}
