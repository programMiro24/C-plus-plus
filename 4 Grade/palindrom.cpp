 #include<iostream>
 using namespace std;
 int main()
 {
   int n,c,ogl,r;
   cin>>n;
   r=n;
   while(n)
   {
     c=n%10;
     ogl=ogl*10+c;
     n=n/10;
    }
    if(r==ogl)cout<<"Yes\n";
    else cout<<"No\n";

 }
