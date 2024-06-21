#include<iostream>
using namespace std;
double a[1000],minch;
int n;
void read_masiv(double *a,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
}
int Minimalno(double *a,int n)
{
    double minch1=a[0],br=1;
    for(int i=1;i<n;i++)
    {
       if(a[i]==minch1){br++;}
       if(a[i]<minch1){br=0;br++;minch1=a[i];}

        /*if(a[i]*10==minch1){br++;}
        if(a[i]*10<minch1){br=0;minch1=a[i];br++;}*/

    }
    return br;
}

/*int Broyach(double *a,int n,double minch)
{
    int br=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==minch)br++;
    }
    return br;
}*/
int main()
{
    cin>>n;
    read_masiv(a,n);
    cout<<Minimalno(a,n)<<endl;
}
