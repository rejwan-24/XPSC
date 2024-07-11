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
        int n,k,x;
        cin>>n>>k>>x;
        vector<int>v(n+1,0);
        for(int i=1;i<=n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int pre[n+1];
        pre[0] = 0;
        for(int i=1;i<=n;i++)
        {
            pre[i] = v[i] + pre[i-1];
        }
        int ans = INT_MIN;
        for(int i=n;i>=0;i--)
        {
            int val = (n-i);
            if(val > k) break;
            int r = min(i,x);
            int sum = (pre[i-r] - (pre[i] - pre[i-r]));
            ans = max(ans,sum);
        }
        cout<<ans<<endl;
    }
    return 0;
}