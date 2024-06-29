 #include<iostream>
 using namespace std;
 int main()
 {
    int ch,m;
    cin>>ch;
    m=ch;
    while(ch)
    {
        cin>>ch;
        if(ch>m)m=ch;
    }
    cout<<m<<endl;
    return 0;
 }
