#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) 
{
    return __gcd(a, b);
}

long long lcm(long long a, long long b) 
{
    return ((a / gcd(a, b)) * b);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, a, b, p, q, ans = 0, overlap;
    cin >> n >> a >> b >> p >> q;

    ans += ((n / a) * p);
    ans += ((n / b) * q);
    overlap = (n / lcm(a, b));
    ans -= (overlap * (p + q));
    ans += (overlap * max(p, q));

    cout << ans << '\n';
    return 0;
}
/*
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n,a,b,p,q;
    cin>>n>>a>>b>>p>>q;
    ll ans = 0;
    for(ll i=1;i<=n;i++)
    {
        if(i % a == 0 && i % b == 0)
        {
            ans += max(p,q);
            continue;
        }
        else if(i % a == 0)
        {
            ans += p;
            continue;
        }
        else if(i % b == 0)
        {
            ans += q;
        }
    }
    cout<<ans<<endl;
    return 0;
} */