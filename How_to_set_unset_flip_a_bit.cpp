#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Your code here
    int n;
    cin >> n;
    int result = n | 1;
    result = result & (~(1 << 1));
    result = result ^ (1 << 2);
    cout << result << endl;

    return 0;
}
