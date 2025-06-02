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
        long long sum = 0;
        bool flag = false;
        for (int i = 0; i < n; i++)
            cin >> v[i];
        for (int i = 0; i < n; i++)
        {
            sum += v[i];
            if (sum % 3 == 0)
            {
                flag = true;
                break;
            }
            for (int j = i + 1; j < n; j++)
            {
                sum += v[j];

                if (sum % 3 == 0)
                {
                    flag = true;
                    break;
                }
            }
            sum = 0;
        }
        if (flag)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}
