 #include<iostream>
 using namespace std;
 int main()
 {
    char b1,b2,b3,b4;
    char c1,c2,c3,c4;
    int sbor,pr;

    cin>>b1>>b2>>c1>>c2;
    cin>>c3>>c4>>b3>>b4;

    sbor=(b1+b2+b3+b4)/10;
    pr=(c1-'0')*(c2-'0')*(c3-'0')*(c4-'0');
    if(sbor==pr)cout<<"Yes "<<pr<<endl;
    else cout<<"No\n";
    return 0;
 }
