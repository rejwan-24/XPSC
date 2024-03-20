#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll a, b;
    cin >> a >> b;

    ll x = a;
    ll cnt = 0;
    while (x <= b)
    {
        // cout << x << " ";
        cnt++;
        x *= 2;
    }
    cout << cnt << endl;
    return 0;
}