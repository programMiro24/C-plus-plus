#include<iostream>
using namespace std;
int main()
{
    int nc,nm,kc,km,pc,pm,p;
    cin>>nc>>nm>>kc>>km;
    nm=nc*60+nm;
    km=kc*60+km;
    p=km-nm;
    pc=p/60;
    pm=p%60;
    cout<<pc<<" "<<pm<<endl;
    return 0;

}
