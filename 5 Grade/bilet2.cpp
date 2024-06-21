#include<iostream>
using namespace std;
int a[16];
int n;
void read_masiv(int n,int *a)
{
    int i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

}
int main()
{
    int S1,S2=0,P1,S,P2,pr;
    cin>>n;
    S=n*10;
    read_masiv(n,a);
    S1=a[0]+n;
    P1=a[0]+1+2*n;
    P2=10-P1+2*n;
    pr=a[0];

    for(int i=1;i<n;i++)
    {
        S1+=a[i];
    }
    S2=S-S1;

    for(int j=1;j<n;j++)
    {
      //  P1+=(a[j]+1);
      //  P2+=10-(a[j]+1);
        if(pr==a[j]){P1+=a[j];P2+=(10-a[j]);}
        if(pr<a[j]){P1+=a[j]-pr;P2+=(10-(a[j]+pr));}
        if(pr>a[j]){P1+=pr-a[j];P2+=(10-(pr+a[j]));}
        pr=a[j];
    }
    cout<<S1<<" "<<P1<<endl;
    cout<<S2<<" "<<P2<<endl;

    /*for(int i=0;i<n;i++)
    {
        cin>>c1;
        S1+=c1;
        P1+=(c1+1);
        P2+=10-(c1+1);
        if(pr==c1){P1+=c1;P2+=(10-c1);}
        if(pr<c1){P1+=c1-pr;P2+=(10-(c1+pr));}
        if(pr>c1){P1+=pr-c1;P2+=(10-(pr+c1));}
        pr=c1;
    }
    S1+=n;
    S2=S-S1;
    cout<<S1<<" "<<P1<<endl;
    cout<<S2<<" "<<P2<<endl;
   */
}
