#include<iostream>
using namespace std;
int main()
{
    char sym;
    int a=0,b=0;
    do
    {
      cin.get(sym);
      if(sym-'a'==0)a++;
      if(sym-'a'==1)b++;
    }
    while(sym!='*');
    if(sym-'a'==0)a++;
    if(sym-'a'==1)b++;
    if(a>b)cout<<"a"<<endl;
    else cout<<"b"<<endl;
}
