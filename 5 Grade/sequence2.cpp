#include<iostream>
using namespace std;
const int MAXN = 100000;
long long a[MAXN];

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
     int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        while (a[i] > 9)
        {
            a[i] = sumDigits(a[i]);
        }
    }

    int answer = 0;
    int cnt = 1;
    int endIndex = 0;

    for (int i = 1; i < n; ++i)
    {
        if (a[i] >= a[i - 1])
        {
            cnt++;
            if (cnt > answer)
            {
                answer = cnt;
                endIndex = i;
            }
        }
        else cnt = 1;
    }

    cout << answer << endl;

    for (int i = endIndex - answer + 1; i <= endIndex; i++)
        cout << a[i] << " ";
    cout << endl;

    return 0;

}
