#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        
        map<char,int> mp;

        for(char c : s)
        {
            mp[c]++;
        }

        int cnt = 0;

        for(auto it : mp)
        {
            if(it.second % 2 != 0)
            {
                cnt++;
            }
        }
        if(k >= cnt-1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}