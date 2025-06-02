#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Your code here
    int n;
    cin >> n;
    int v[n];
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int v2[n];

    for (int i = n - 1; i >= 0; i--)
    {
        v2[i] = v[n - (i + 1)];
    }
    for (int i = 0; i < n; i++)
        cout << v2[i] << " ";

    return 0;
}
