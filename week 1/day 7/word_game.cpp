#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> v[3];
        map<string,int> mp;
        
        for (int i=0;i<3;i++)
        {
            for (int j=0;j<n;j++)
            {
                string s;
                cin>>s;
                v[i].push_back(s);
                mp[s]++;
            }
        }

        for (int i=0;i<3;i++)
        {
            int cnt = 0;
            for (string st : v[i])
            {
                if (mp[st] == 1)
                {
                    cnt += 3;
                }

                else if (mp[st] == 2)
                {
                    cnt += 1;
                }
            }
            cout<<cnt<<" ";
        }
        cout<<"\n";
    }
}