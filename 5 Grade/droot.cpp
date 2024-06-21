#include<iostream>
using namespace std;
int pok[10],br=0;
int Proverka(int *pok,int br)
{
    for(int i=0;i<br;i++)
    {
        if(pok[i]==0)return 0;
    }
    return 1;
}
int main()
{
    long long N;
    int i,kor,pr,sb=0,sb2=0;
    cin>>N;
    pr=N%10;N/=10;sb+=pr;
    while(N!=0)
    {
        if(pr=N%10)pok[br]=1;
        else pok[br]=0;
        br++;
        pr=N%10;
        N/=10;
        sb+=pr;
    }
    if(Proverka(pok,br)==1)kor=pr;
    else
    {   while(sb<=9)
        {
            sb2+=sb%10;
            sb/=10;
        }
    }
    cout<<kor<<endl;
}
