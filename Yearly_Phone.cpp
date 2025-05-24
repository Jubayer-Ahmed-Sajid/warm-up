#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // Your code here
    int x;
    cin>>x;
    int a,b;
     a = x % 10;
     x = x/10;
     b = x % 10;
     cout<<'K'<<b<<a;
     

    return 0;
}
