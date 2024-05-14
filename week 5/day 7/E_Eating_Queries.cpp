#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        vector<int>v(n);
        for(int i=0;i<n;i++) 
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end(),greater<int>());
        vector<int>pre(n);
        pre[0]=v[0];
        for(int i=1;i<n;i++)
        {
            pre[i] = pre[i-1] + v[i];
        }
        while(q--) 
        {
            int x;
            cin>>x;
            auto it = lower_bound(pre.begin(),pre.end(),x);  
            if(it == pre.end())
            {
                cout<<-1<<endl;
            }
            else 
            {
                int ans = it - pre.begin();
                cout<<ans+1<<endl;
            }
        }
    }
    return 0;
}