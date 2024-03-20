#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll x,y;
    cin>>x>>y;
    ll cnt = 0;

    while (x <= y)
    {
        cnt++;
        x *= 2;
    }
    
    cout<<cnt<<endl;
    return 0;
}
