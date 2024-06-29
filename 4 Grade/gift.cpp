 #include<iostream>
 using namespace std;
 int main()
 {
    char b1,b2,b3,c1,c2,c3;
    cin>>b1>>b2>>b3;
    cin>>c1>>c2>>c3;

    if(b1>b2)swap(b1,b2);
    if(b1>b3)swap(b1,b3);
    if(b2>b3)swap(b2,b3);

    if(c1<c2)swap(c1,c2);
    if(c1<c3)swap(c1,c3);
    if(c2<c3)swap(c2,c3);

    cout<<b1<<c1<<b2<<c2<<b3<<c3<<endl;
    return 0;
 }
