#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,q;
        cin>>n>>k>>q;
        vector<ll> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        ll ans = 0;
        ll cons = 0;
        for(int i=0;i<n;i++)
        {
            if(v[i] <= q)
            {
                cons++;
                if(i == n-1 || v[i+1] > q)
                {
                    if(cons >= k)
                    {
                        ll x = cons - k + 1LL;
                        ll add = (x * (x + 1LL)) / 2LL;
                        ans += add;
                    }
                    cons = 0;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}