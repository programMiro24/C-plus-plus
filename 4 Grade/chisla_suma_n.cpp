 #include<iostream>
 using namespace std;
 int main()
 {
   int n,i,s,d,e,r;
   cin>>n;
    for(i=100;i<=999;i++)
       {
           r=i;
           s=r/100;
           r=r%100;
           d=r/10;
           e=r%10;
           if(n==s+d+e)cout<<i<<" ";
       }
      return 0;
}
