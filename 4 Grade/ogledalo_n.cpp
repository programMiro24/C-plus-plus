 #include<iostream>
 using namespace std;
 int main()
 {
   int n,c,ogl;
   cin>>n;
   while(n)
   {
     c=n%10;
     ogl=ogl*10+c;
     n=n/10;
    }
    cout<<ogl<<endl;
    return 0;
 }
