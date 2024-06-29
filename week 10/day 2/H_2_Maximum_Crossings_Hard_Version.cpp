#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long 
template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

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
        vector<int>v(n+5);
        for(int i=1;i<=n;i++) cin>>v[i];
        pbds<ll>p;
        ll mc = 0,sml;
        for(int i=1;i<=n;i++)
        {
            if(i == 1) p.insert(v[i]);
            else 
            {
                p.insert(v[i]);
                sml = p.order_of_key(v[i]);
                sml++;
                mc += (ll) p.size() - sml;
            }
        }
        cout<<mc<<endl;
    }
    return 0;
}