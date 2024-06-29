#include<iostream>
using namespace std;
int main()
{
    int n,s,d,e;
    cin>>n;
    e=n%10;
    n=n/10;
    d=n%10;
    s=n/10;
    cout<<s+d+e<<endl;
    return 0;

}
