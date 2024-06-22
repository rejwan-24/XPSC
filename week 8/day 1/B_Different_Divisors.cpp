#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll primenxt(ll a)
{
    int flag = true;;
    while(true)
    {
        flag = true;
        for(ll i=2;i<=sqrt(a);i++)
        {
            if(a % i == 0)
            {
                flag = false;
                break;
            }
        }
        if(flag) break;
        else a++;
    }
    return a;
}
int main()
{
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
        int d;
        cin>>d;
        ll ans = 0;
        ll a = d + 1;
        a = primenxt(a);
        ll b = a + d;
        b = primenxt(b);
        ans = a * b;
        cout<<ans<<'\n';
    }
    return 0;
} 