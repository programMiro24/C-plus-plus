 #include<iostream>
 using namespace std;
 int main()
 {
    long long n,c,s=0;
    cin>>n;
    while(n)
    {
        c=n%10;
        s=s+c;
        n=n/10;
    }
    cout<<s<<endl;
    return 0;
 }
