#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Your code here
    int n;
    cin >> n;
    int v[4 * n - 1];
    for (int i = 0; i < 4 * n - 1; i++)
    {
        cin >> v[i];
    }
    int v2[n + 1] = {0};
    for (int i = 0; i < 4 * n - 1; i++)
    {
        v2[v[i]]++;
    }

    for (int i = 1; i <= n; i++)
    {
        if (v2[i] < 4)
        {
            cout << i;
            break;
        }
    }

    return 0;
}
