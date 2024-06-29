#include<iostream>
using namespace std;
int main()
{
  int ht1,mt1,hp1,mp1,ht2,mt2,hp2,mp2,hp3,mp3,ht3,mt3,v1,v2,v3,min,max;
  cin>>ht1>>mt1>>hp1>>mp1;
  cin>>ht2>>mt2>>hp2>>mp2;
  cin>>ht3>>mt3>>hp3>>mp3;

  mt1=ht1*60+mt1;
  mp1=hp1*60+mp1;
  if(mp1<mt1)mp1=mp1+60*24;
  v1=mp1-mt1;

  mt2=ht2*60+mt2;
  mp2=hp2*60+mp2;
  if(mp2<mt2)mp2=mp2+60*24;
  v2=mp2-mt2;

  mt3=ht3*60+mt3;
  mp3=hp3*60+mp3;
  if(mp3<mt3)mp3=mp3+60*24;
  v3=mp3-mt3;

  max=v1;
  if(v2>max)max=v2;
  if(v3>max)max=v3;

  min=v1;
  if(v2<min)min=v2;
  if(v3<min)min=v3;

  cout<<min/60<<":"<<min%60<<endl;
  cout<<max/60<<":"<<max%60<<endl;
  return 0;
}

