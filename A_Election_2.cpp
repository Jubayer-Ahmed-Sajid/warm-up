#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Your code here
    int n,x,y;
    cin>>x>>y;
    int winingRequirement = n/2 + 1;
    if(x>=winingRequirement || y >= winingRequirement)  cout<<"YES";
    else cout<<"NO"<<endl;

    return 0;
}
