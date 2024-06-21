#include<iostream>
using namespace std;
const int MAXN = 100000;
long long a[MAXN];
int n;
void read_masiv(int n,long long *a)
{
    int i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

}
int sumDigits(long long x)
{
    int sum = 0;

    while (x > 0)
    {
        sum += x % 10;
        x /= 10;
    }

    return sum;
}

int main()
{
    cin>>n;
    read_masiv(n,a);
    for(int j=0;j<n;j++)
    {
       while(a[j]>9)
       {
           a[j]=sumDigits(a[j]);
       }

    }
    int max_dulg = 0;
    int dulg = 1;
    int endIndex = 0;

    for (int i = 1; i < n; ++i)
    {
        if (a[i] >= a[i - 1])
        {
            dulg++;
            if (dulg > max_dulg)
            {
                max_dulg = dulg;
                endIndex = i;
            }
        }
        else dulg = 1;
    }

    cout << max_dulg << endl;

    for (int i = endIndex - max_dulg + 1; i <= endIndex; i++)
        cout << a[i] << " ";
    cout << endl;

}
