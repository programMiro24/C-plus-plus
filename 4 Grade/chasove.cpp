#include<iostream>
using namespace std;
int main()
{
    int nc,nm,c,mbrm,mbrg,mm,mch,kc,vr,km;
    cin>>c;
    nc=8;
    nm=00;
    nm=8*60+nm;
    mbrm=c-2;
    mbrg=1;
    mm=mbrm*10+mbrg*20;
    mch=mm/60;
    mm=mm%60;
    km=mch*60+mm+c*40+nm;
    kc=km/60;
    km=km%60;
    cout<<kc<<" "<<km;
    return 0;
}
