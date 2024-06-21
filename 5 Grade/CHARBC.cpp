#include<iostream>
using namespace std;
int main()
{
    char sym;
    int br=0,pr,seg;
    cin.get(sym);
    pr=sym-'a';
    do
    {
      cin.get(sym);
      seg=sym-'a';
      if(pr==2&&seg==1)br++;
      pr=seg;
    }
    while(sym!='.');
    if(pr==3&&seg==2)br++;
    cout<<br<<endl;
}
