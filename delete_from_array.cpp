#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Your code here
    int n;
    cin>>n;
    int v[n];
    for(int i =0;i<n;i++){
        cin>>v[i];
    }
    int i =0;
    int j = n-1;
    while(i<j){
        int temp = v[i];
        v[i]=v[j];
        v[j] = temp;
       
        i++;
        j--;
    }
    for(int i =0;i<n;i++) cout<<v[i]<<" ";

    return 0;
}
