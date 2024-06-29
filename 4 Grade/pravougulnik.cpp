#include<iostream>
using namespace std;
int main()
{
    int am,as,bm,bs,pm,ps,p;
    cin>>am>>as>>bm>>bs;
    as=am*100+as;
    bs=bm*100+bs;
    p=(as+bs)*2;
    pm=p/100;
    ps=p%100;
    cout<<pm<<" "<<ps<<endl;
    return 0;

}


