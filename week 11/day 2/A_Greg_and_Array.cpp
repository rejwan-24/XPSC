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
    
    int n,m,k;
    cin>>n>>m>>k;
    vector<ll>v(n+1);
    vector<ll>dif(n+2,0);
    vector<tuple<int,int,ll>>op(m+1);
    vector<ll>q(m+2,0);
    for(int i=1;i<=n;i++) cin>>v[i];
    for(int i=1;i<=m;i++)
    {
        int l,r,d;
        cin>>l>>r>>d;
        op[i] = {l,r,d};
    }
    while(k--)
    {
        int x,y;
        cin>>x>>y;
        q[x]++;
        q[y+1]--;
    }
    for(int i=1;i<=m;i++)
    {
        q[i] = q[i-1] + q[i];
    }
    for(int i=1;i<=m;i++)
    {
        int l = get<0>(op[i]);
        int r = get<1>(op[i]);
        int d = get<2>(op[i]);
        ll d1 = 1ll * d * q[i];
        dif[l] += d1;
        dif[r + 1] -= d1;
    }
    for(int i=1;i<=n;i++)
    {
        dif[i] = dif[i-1] + dif[i];
    }
    for(int i=1;i<=n;i++)
    {
        dif[i] = dif[i] + v[i];
    }
    for(int i=1;i<=n;i++) cout<<dif[i]<<" ";
    cout<<endl;
    return 0;
}
