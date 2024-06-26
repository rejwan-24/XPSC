#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
        ll y,x;
        cin>>y>>x;
        ll m = max(y,x);
        ll diagonal = 1 + m * (m - 1);
        if(y == x) cout<<diagonal<<endl;
        else 
        {
            if(y > x)
            {
                if(y % 2 == 0)
                {
                    cout<<diagonal + (y - x)<<endl;
                }
                else 
                {
                    cout<<diagonal - (y - x)<<endl;
                }
                
            }
            else
            {
                if(x % 2 == 0) 
                {
                    cout<<diagonal - (x - y)<<endl;
                }
                else 
                {
                    cout<<diagonal + (x - y)<<endl;
                }
            }
        }
    }
    return 0;
}