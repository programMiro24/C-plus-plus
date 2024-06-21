#include<iostream>
using namespace std;
int a[1000],n;
void read_masiv(int *a,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

}
int Proizvedenie(int *a,int n)
{
    int pr=1,maxpr=0,ch,ch2,ch3,prch,prch2,prch3;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<(3+i);j++){ch=a[j];pr*=a[j];
        if(pr>maxpr){maxpr=pr;}
        pr=0;
    }
    return maxpr;
}
int main()
{
    cin>>n;
    read_masiv(a,n);
}
