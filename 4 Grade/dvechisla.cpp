#include<iostream>
using namespace std;
int main()
{
    int x,y,r;
    cin>>x>>y;
    if(x%2==0&&y%2==0)r=x+y;
    else if(x%2!=0&&y%2==1)r=x*y;
         else if(x>y)r=x;
              else r=y;
    cout<<r<<endl;
    return 0;

}
