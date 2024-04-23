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
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int ans = 0;
        for(int val : v)
        {
            ans |= val;
        }
        cout<<ans<<endl;
    }
    return 0;
}