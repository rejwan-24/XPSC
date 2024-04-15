#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,h;
        cin>>n>>m>>h;
        vector<ll> v(n);
        vector<ll> v1(m);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(int i=0;i<m;i++)
        {
            cin>>v1[i];
        }

        sort(v.begin(), v.end(), greater<int>());
        sort(v1.begin(), v1.end(), greater<int>());
        int a = min(n,m);
        long long ans = 0;

        for(int i=0;i<a;i++)
        {
            ans += min(v[i],v1[i] * h);
        }
        cout<<ans<<endl;
    }
    return 0;
}