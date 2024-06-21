#include<iostream>
#include<string.h>
#include<string>
using namespace std;
int main()
{
    short day;
    cin>>day;
    short day_2;
    string error="This is not limit.";
    day_2=(day+100+25)%7;
    if(day_2==0)day_2=7;
    //if(day_2>7)day_2=day_2%7;
    cout<<day_2<<endl;
    return 0;
}
