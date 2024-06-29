 #include<iostream>
 using namespace std;
 int main()
 {
      int n,sh,dh,h,s,d,e,br=0,n1,n2;
      cin>>n;
      sh=n/100000;
      n=n%100000;
      dh=n/10000;
      n=n%10000;
      h=n/1000;
      n=n%1000;
      s=n/100;
      n=n%100;
      d=n/10;
      e=n%10;
      if(sh%2)br++;
      if(dh%2)br++;
      if(h%2)br++;
      if(s%2)br++;
      if(d%2)br++;
      if(e%2)br++;
      n1=sh*100+h*10+d;
      n2=d*100+h*10+sh;
      if(n1>n2)n=n1-n2;
      else n=n2-n1;
      cout<<br<<n<<endl;
      return 0;

 }
