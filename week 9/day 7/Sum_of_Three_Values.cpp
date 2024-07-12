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
    vector<pair<ll,int>>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i].first;
        v[i].second = i+1;
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        ll x2 = x - v[i].first;
        for(int j=i+1,k=n-1;j<k;j++)
        {
            while(v[j].first + v[k].first > x2)
            {
                k--;
            }
            if(j < k && v[j].first + v[k].first == x2)
            {
                cout<<v[i].second<<" "<<v[j].second<<" "<<v[k].second;
                return 0;
            }
        }
    }
    cout<<"IMPOSSIBLE"<<endl;
    return 0;
}