 #include<iostream>
 using namespace std;
 int main()
 {
    char b;
    cin>>b;
    if(b>='a'&&b<='z')b=b-('a'-'A');
    else if(b>='A'&&b<='Z')b=b+('a'-'A');
         else {cout<<"Tova ne e bukva!\n";
               return 0;}
        cout<<b<<endl;
        return 0;

 }
