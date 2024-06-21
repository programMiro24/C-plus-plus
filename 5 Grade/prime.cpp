#include<iostream>
using namespace std;
long long a[100];
int n;
void Read_Masiv(long long *a, int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
}
int isPrime(int x)
{
    if (x<=1)return 0;
    for (int i=2;i<=x/2;i++)
    {
    if (x%i==0) return 0;
    }
    return 1;
}
int main()
{
    int br=0;
    cin>>n;
    Read_Masiv(a,n);
    for(int i=0;i<n;i++)
    {
        isPrime(a[i]);
        if(isPrime(a[i])==1)br++;
    }
    cout<<br<<endl;
}
