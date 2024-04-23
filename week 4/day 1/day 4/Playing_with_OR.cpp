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
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int l=0,r=0;
        int od_cnt = 0,ans=0;
        while(r < n)
        {
            if(v[r] % 2 != 0)
            {
                od_cnt++;
            }
            if(r - l + 1 == k)
            {
                if(od_cnt > 0)
                {
                    ans++;
                }
                if(v[l] % 2 !=0)
                {
                    od_cnt--;
                }
                l++;
            }
            r++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
