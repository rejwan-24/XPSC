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
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }

        int ans = 0;

        for(int i=0;i<n;i++)
        {
            int sub = v[i] - (i+1);
            if(sub > ans)
            {
                ans = sub;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
