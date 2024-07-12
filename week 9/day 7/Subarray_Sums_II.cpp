#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long 
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,x;
    cin>>n>>x;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    ll sum = 0;
    map<ll,int>mp;
    mp[0]++;
    ll cnt = 0;
    for(int i=0;i<n;i++)
    {
        sum += v[i];
        cnt += mp[sum - x];
        mp[sum]++;
    }
    cout<<cnt<<endl;
    return 0;
}