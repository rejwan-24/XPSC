#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        int p = __lg(x);
        int ans=1;
        bool flag=false;
        for(int i=p-1;i>=0;i--)
        {
            if(x &  (1 << i)) 
            {
                flag=true;
            }
           else if(flag)
           {
               ans*=2;
           }
        }
        cout<<ans<<endl;
    }
    return 0;
}