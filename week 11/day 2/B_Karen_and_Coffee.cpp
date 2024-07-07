#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long 
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int N = 2e5 + 10;
int main()
{
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, k, q;
    cin>>n>>k>>q;
    vector<ll>d(N,0);
    for (int i=0;i<n;i++)
    {
        int l, r;
        cin>>l>>r;
        d[l]++;
        d[r+1]--;
    }
    for (int i=1;i<N;i++)
    {
        d[i] = d[i] + d[i-1];
    }
    vector<ll> pre(N, 0);
    for (int i=0;i<N;i++)
    {
        if (d[i]>=k) pre[i] = 1;
    }
    for (int i=1;i<N;i++)
    {
        pre[i] = pre[i] + pre[i-1];
    }
    while (q--)
    {
        int a, b;
        cin>>a>>b;
        cout<<pre[b] - pre[a-1]<<"\n";
    }
    return 0;
}