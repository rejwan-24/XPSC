#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long s;
    cin>>n>>s;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int l=0,r=0,ans = INT_MAX;
    long long int sum = 0;
    while(r < n)
    {
        sum += v[r];
        while(sum >= s)
        {
            ans = min(ans,r-l+1);
            sum -= v[l];
            l++;
        }
           r++;
    }
    if(ans == INT_MAX) cout<<-1<<'\n';
    else cout<<ans<<'\n';
    return 0;
}