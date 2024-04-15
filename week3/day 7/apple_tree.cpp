#include<bits/stdc++.h>
using namespace std;
#define ll long long 
const int N = 2e5 + 5;
vector<int> ar[N];
bool vis[N];
vector<ll> leafs(N);

ll dfs(int curr,int par)
{
    vis[curr] = true;
    ll ans = 0;
    ll cnt = 0;
    for(int child : ar[curr])
    {
        if(!vis[child])
        {
            ans += dfs(child,par);
            cnt++;
        }
    }
    if(cnt == 0) return leafs[curr] = 1;
    return leafs[curr] = ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        for(int i=1;i<=n;i++) 
        {
            ar[i].clear(); // Clear previous data
            vis[i] = false; // Reset vis array
           leafs[i] = 0; // Reset leafs array
        } 
        int e = n-1;
        while(e--)
        {
            int a,b;
            cin>>a>>b;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              
            ar[a].push_back(b);
            ar[b].push_back(a);
        }
        
        dfs(1,-1);
        int q;
        cin>>q;

        while(q--)
        {
            int x,y;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            
            cin>>x>>y;
            ll ans = leafs [x] * leafs[y];         
            cout<<ans<<endl;                 
        }
    }
    return 0;
}