#include<iostream>
using namespace std;
int z[40],z2[40],z3[40],n,sb[40];
void read_masiv(int n,int *z,int *z2,int *z3)
{
    int i;
    for(i=0;i<n;i++)
    {
        cin>>z[i]>>z2[i]>>z3[i];
    }

}
int main()
{
    int i,maxsb,ind=-1;
    cin>>n;
    read_masiv(n,z,z2,z3);
    for(i=0;i<n;i++)
    {
        sb[i]=z[i]+z2[i]+z3[i];
    }
    maxsb=sb[0];
    for(i=1;i<n;i++)
    {
        if(sb[i]>maxsb){maxsb=sb[i];ind=i+1;}
    }
    cout<<ind<<endl;

}

