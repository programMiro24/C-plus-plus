#include<iostream>
using namespace std;
int main()
{
    int cl,cs,pl,ps,br,r;
    cin>>cl>>cs>>pl>>ps;
    cs=cl*100+cs;
    ps=pl*100+ps;
    br=ps/cs;
    r=ps%cs;
    cout<<br<<" "<<r<<endl;
    return 0;

}
