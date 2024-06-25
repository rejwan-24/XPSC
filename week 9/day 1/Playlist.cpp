#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int ans = 0;
    set<int>s;
    int l=0,r=0;
    while(l < n && r < n)
    {
        while(r < n && !s.count(v[r]))
        {
            s.insert(v[r]);
            ans = max(ans,r-l+1);
            r++;
        }
        while(r < n && s.count(v[r]))
        {
            s.erase(v[l]);
            l++;
        }
    }
    cout<<ans<<endl;
    return 0;
}