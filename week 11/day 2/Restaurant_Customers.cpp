#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long 
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int N = 10e6;
int main()
{
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n;
    cin>>n;
    vector<pair<int,int>>d;
    for(ll i=0;i<n;i++)
    {
        ll a,b;
        cin>>a>>b;
        d.push_back({a,1});
        d.push_back({b,-1});
    }
    sort(d.begin(),d.end());
    ll mx_c = 0;
    ll curr_c = 0;

    for (ll i=0;i<d.size();i++) 
    {
        curr_c += d[i].second;
        mx_c = max(mx_c,curr_c);
    }
    cout<<mx_c<<endl;
    return 0;
}