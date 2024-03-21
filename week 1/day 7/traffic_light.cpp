#include<bits/stdc++.h>
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
        char now;
        string s;
        cin>>n>>now>>s;
        s += s;
        int l = n*2;

        if(now == 'g')
        {
            cout<<0<<endl;
            continue;
        }

        int cnt = 0;
        int ans = 0;

        for(int i=0;i<l;i++)
        {
            if(s[i] == now)
            {
                cnt = 0;
                while(s[i] != 'g' && i < l)
                {
                    cnt++;
                    i++;
                }

                if(cnt > ans)
                {
                    ans = cnt;
                }
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}
 