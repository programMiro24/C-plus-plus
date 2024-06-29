 #include<iostream>
 using namespace std;
 int main()
 {
    int ch,s=0,pr=1;
    do
    {
     cin>>ch;
     if(ch%2)pr=pr*ch;
     else s=s+ch;
    }
    while(ch);
    cout<<s<<" "<<pr<<endl;
}
