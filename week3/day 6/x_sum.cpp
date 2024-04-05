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
        int a[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }

        int ans = 0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int cur = 0;
                int mi = i, mj = j;
                while(mi >= 0 && mi < n && mj >= 0 && mj < m)
                {
                    cur += a[mi][mj];
                    mi--;
                    mj--;
                }

                mi = i,mj = j;
                while(mi >= 0 && mi < n && mj >= 0 && mj < m)
                {
                    cur += a[mi][mj];
                    mi++;
                    mj--;
                }

                mi = i, mj = j;
                while(mi >= 0 && mi < n && mj >= 0 && mj < m)
                {
                    cur += a[mi][mj];
                    mi--;
                    mj++;
                }

                mi = i, mj = j;
                while(mi >= 0 && mi < n && mj >= 0 && mj < m)
                {
                    cur += a[mi][mj];
                    mi++;
                    mj++;
                }

                cur -= a[i][j] * 3;
                ans = max(ans,cur);
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}