#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        int x_or = 0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            x_or ^= v[i];
        }
        int ans = x_or;
        for(int i=0;i<n;i++)
        {
            ans = min(ans,(x_or ^ v[i]));
        }
        cout<<ans<<endl;
    }
    return 0;
}