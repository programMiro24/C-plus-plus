 #include<iostream>
 using namespace std;
 int main()
 {
    int ch,br=0;
    do
    {
     cin>>ch;
     if(ch)br++;
    }
    while(ch);
    cout<<br<<endl;
}
