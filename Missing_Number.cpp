#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Your code here
    long long n;
    cin >> n;
    long long v[n - 1];
    long long sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    long long sum2 = n * (n + 1) / 2;
    cout << sum2 - sum;

    return 0;
}
