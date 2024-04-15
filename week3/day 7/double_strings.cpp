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
        vector<string> v(n);
        map<string,int> mp;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            mp[v[i]] = 1;
        }
        for(int i=0;i<n;i++)
        {
            int ans = 0;
            for(int len = 1;len < v[i].size();len++)
            {
                string l = v[i].substr(0,len);
                string r = v[i].substr(len,v[i].size()-len);
                if(mp[l] == 1 && mp[r] == 1)
                {
                    ans = 1;
                    break;
                }
            }
            if(ans == 1) cout<<1;
            else cout<<0;
        }
        cout<<endl;
    }
    return 0;
}