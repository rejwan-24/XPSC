#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    int n; 
    cin>>n;
    int l,r,x; 
    cin>>l>>r>> x;
    vector<int>v(n);
    for(int i=0;i<n;i++) 
    {
        cin >> v[i];
    }
    int ans = 0;
    for(int i=0;i<(1 << n);i++)
    {
        int sum = 0;
        int mx = 0,mn = INT_MAX;
        for(int j=0;j<n;j++)
        {
            if((i>>j)&1) 
            {
                sum+=v[j];
                mx = max(mx,v[j]);
                mn = min(mn,v[j]);
            }
        }
        if(l<=sum && sum<=r && mx-mn>=x)
        {
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}