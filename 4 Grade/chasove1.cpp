#include<iostream>
using namespace std;
int main()
{
    int nvr,kvr,h,m,n;
    cin>>n;
    nvr=8*60;
    kvr=nvr+n*40+20+(n-2)*10;
    h=kvr/60;
    m=kvr%60;
    cout<<h<<" "<<m<<endl;
    return 0;

}
