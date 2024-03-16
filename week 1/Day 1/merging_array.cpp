#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;

    vector<int> v(n + m);

    for (int i=0;i<n;i++) 
    {
        cin>>v[i];
    }

    for (int i=n;i<n+m;i++) 
    {
        cin>>v[i];
    }

    sort(v.begin(),v.end());

    for (int i=0;i<n + m;i++) 
    {
        cout<<v[i]<<" ";
    }

    return 0;
}
