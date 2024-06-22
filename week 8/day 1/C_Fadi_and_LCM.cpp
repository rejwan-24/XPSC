#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll lcm(ll a,ll b)
{
    return((a / __gcd(a,b))*b);
}
int main()
{
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll x;
    cin>>x;
    ll ans = x;

    for(ll i=1;i<=sqrt(x);i++) 
    {
        if (x % i == 0) 
        {
            ll a = i;
            ll b = x / i;
            ll lcmv = lcm(a,b);
            if(lcmv == x)
            {
                ans = min(ans,max(a,b));
            }
        }
    }
    cout<<x/ans<<" "<<ans;
    
    return 0;
} 
/*
 cin>>x;
   ll ans=1e18;
   for(ll i=1;i*i<=x;i++)
   {
       if(x%i==0)
       {
           a=i;
           b=x/i;
           if(a*b/__gcd(a,b)==x)
           {
               ans=min(ans,b);
           }
       }
   }
   cout<<x/ans<<" ";
   cout<<ans<<line;
    }
*/