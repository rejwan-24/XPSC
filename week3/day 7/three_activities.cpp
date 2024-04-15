#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<pair<ll,ll>> sk,mv,bg;

        for(int i=0;i<n;i++)
        {
            ll val;
            cin>>val;
            sk.push_back({val,i});
        }

        for(int i=0;i<n;i++)
        {
            ll val;
            cin>>val;
            mv.push_back({val,i});
        }

        for(int i=0;i<n;i++)
        {
            ll val;
            cin>>val;
            bg.push_back({val,i});
        }

        sort(sk.rbegin(), sk.rend());
        sort(mv.rbegin(), mv.rend());
        sort(bg.rbegin(), bg.rend());
        
        ll ans = 0;

        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                for(int k=0;k<3;k++)
                {
                    if(sk[i].second != mv[j].second && sk[i].second != bg[k].second &&
                       mv[j].second != bg[k].second)
                    {
                        ans = max(sk[i].first + mv[j].first + bg[k].first , ans);
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}