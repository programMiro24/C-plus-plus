 #include<iostream>
 using namespace std;
 int main()
 {
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b&&b==c)cout<<a<<b<<c<<endl;
    if(a!=b&&a==c)cout<<a<<b<<c<<endl;
    if(a!=b&&b==c)cout<<a<<b<<c<<a<<endl;
    if(a!=b&&b!=c&&a!=c)cout<<a<<b<<c<<b<<a<<endl;
    if(a==b&&b!=c&&a!=c)cout<<a<<b<<c<<b<<a<<endl;
    return 0;

 }
