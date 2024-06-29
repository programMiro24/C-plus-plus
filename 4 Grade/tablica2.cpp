#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<=100;i++ )
    {
        for(j=1;j<=100;j++)
             cout<<setw(6)<<i*j;
            cout<<endl;
    }

}
