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
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<pair<ll,ll>>v(n);
        for(ll i=0;i<n;i++)
        {
            cin>>v[i].first>>v[i].second;
        }
        sort(v.begin(),v.end());
        pbds<ll>p;
        for(auto it : v)
        {
            p.insert(it.second);
        }
        ll cnt = 0;
        for(ll i=0;i<n;i++)
        {
            cnt += p.order_of_key(v[i].second);
            p.erase(v[i].second);
        } 
        cout<<cnt<<endl; 
    }
    return 0;
}


        