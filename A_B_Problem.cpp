#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Your code here
    int a, b;
    cin >> a >> b;
    float c =(float) a / b;
    
    cout << a / b << " " << a % b << " " ;
    printf("%.5f\n", c);
    return 0;
}
