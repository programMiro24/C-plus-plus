 #include<iostream>
 using namespace std;
 int main()
 {
    int ch,d5=0;
    do
    {
     cin>>ch;
     if(ch%5==0)d5++;

    }
    while(ch);
    cout<<d5<<endl;
}
