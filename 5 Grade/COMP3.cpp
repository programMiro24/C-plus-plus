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
    int s,d,e,sum=0,maxsum=0,indexmax=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<100)
        {
            d=a[i]/10;
            e=a[i]%10;
            sum=d+e;
        }
        else
        {
            s=a[i]/100;
            a[i]%=100;
            d=a[i]/10;
            e=a[i]%10;
            sum=s+d+e;
        }
            if(maxsum<sum)
            {
              maxsum=sum;
              indexmax=i+1;
            }
    }
    cout<<indexmax<<endl;
}
int main()
{
    cin>>n;
    read_masiv(a,n);
    Preobrazuvai(a,n);
}
