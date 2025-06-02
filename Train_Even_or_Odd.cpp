#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Your code here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int even_sum = 0;
        int odd_sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                even_sum += v[i];
            }
            else
                odd_sum += v[i];
        }
        if (even_sum > odd_sum)
            cout << even_sum << endl;
        else
            cout << odd_sum << endl;
    }

    return 0;
}
