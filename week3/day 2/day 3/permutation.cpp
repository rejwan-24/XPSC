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
        int mat[n+5][n];
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<n;j++)
            {
                cin>>mat[i][j];
            }
        }
        map<int,int> mp;
        map<int,int> m;
        for(int i=1;i<=n;i++)
        {
            mp[mat[i][n-1]] = i;
            m[mat[i][n-1]] ++;
        }
        int idx = 0;
        int val;
        for(auto it : m)
        {
            if(it.second == 1)
            {
                idx = it.first;
            }
            else
            {
                val = it.first;
            }
        }
        for(int j=1;j<n;j++)
        {
            cout<<mat[mp[idx]][j]<<" ";
        }
        cout<<val<<endl;
    }
    
    return 0;
}