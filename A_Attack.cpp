#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Your code here
    long long a,b;
    cin>>a>>b;
    if(a%b ==0){
        cout<<a/b;
    }
    else cout<<a/b+1;

    return 0;
}
