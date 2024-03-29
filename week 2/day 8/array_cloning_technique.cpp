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
        vector<int> v(n);
        map<int,int>mp;
        int mx=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            mp[v[i]]++;
            mx = max(mx,mp[v[i]]);
        }
        int cnt = mx;
        int op = 0;
        while(cnt < n)
        {
            op++;
            int remn = n - cnt;
            if(remn > cnt)
            {
                op += cnt;
                cnt += cnt;
            }
            else
            {
                op += remn;
                cnt += remn;
            }
        }
        cout<<op<<endl;
    }
    return 0;
}