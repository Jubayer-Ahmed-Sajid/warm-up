#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Your code here
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a*c > b*d) cout<<a*c;
    else cout<<b*d;

    return 0;
}
