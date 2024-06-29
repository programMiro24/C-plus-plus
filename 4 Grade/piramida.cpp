#include<iostream>
using namespace std;
int main()
{
    int n,br=1,r,i,j;
    cin>>n;
    r=n-1;
    for(i=1;i<=n;i++)
    {
     for(j=1;j<=r;j++)cout<<" ";
     for(j=1;j<=br;j++)cout<<"*";
     cout<<endl;
    r--;br=br+2;
    }
 return 0;
}
