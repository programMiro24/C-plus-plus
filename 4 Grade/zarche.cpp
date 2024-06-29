#include<iostream>
using namespace std;
int main()
{
    cout<<"Za da zapishes otgovorite si na vuprosite kato da she zpishes 1, a za ne she zpishes 0\n";
    int v1,v2,v3;
    cout<<"Chisloto golyamo li e?\n";
    cin>>v1;
    cout<<"Chisloto deli li se na 2?\n";
    cin>>v2;
    cout<<"Chisloto deli li se na 3?\n";
    cin>>v3;
    if(v1)
        if(v2)
            if(v3)cout<<"Chisloto namisleno ot teb e 6";
            else cout<<"Chisloto namisleno ot teb e 4";
        else
           if(v3)cout<<"Nyama takova chislo";
           else cout<<"Chisloto namisleno ot teb e 5";
    else
       if(v2)
           if(v3)cout<<"Nyama takova chislo";
           else cout<<"Chisloto namisleno ot teb e 2";
       else
          if(v3)cout<<"Chisloto namisleno ot teb e 3";
           else cout<<"Chisloto namisleno ot teb e 1";
    return 0;


}
