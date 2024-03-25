#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<string> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }

        int mn = INT_MAX;
        
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                string x = v[i];
                string y = v[j];
                int dis = 0;
                for(int k=0;k<m;k++)
                {
                    dis += abs(x[k] - y[k]);
                }
                mn = min(mn,dis);
            }
        }
        cout<<mn<<endl;
    }
    return 0;
}
