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
        vector<ll>v(n),v1(q);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(int i=0;i<q;i++)
        {
            cin>>v1[i];
        }
        int mn = INT_MAX;

        for(ll i : v1)
        {
            if(i < mn)
            {
                int d = (1 << i);
                for(int j = 0;j<n;j++)
                {
                    if(v[j] % d == 0) 
                    {
                        v[j] += (d >> 1);
                    }
                }
                mn = i;
            }
        }

        for(ll i : v)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}