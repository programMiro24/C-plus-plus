 #include<iostream>
 using namespace std;
 int main()
 {
   int n,i,h,s,d,e,r;
   cin>>n;
    for(i=1000;i<=9999;i++)
       {
           r=i;
           h=r/1000;
           r=r%1000;
           s=r/100;
           r=r%100;
           d=r/10;
           e=r%10;
           if(n==h+s+d+e)cout<<i<<" ";
       }
      return 0;
}
