#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Your code here
    int x,y;
    cin>>x>>y;
   if((x-y > 0 && x-y > 3)|| (x-y < 0 && x-y < -2)) cout<<"No";
   else cout <<"Yes";

    return 0;
}
