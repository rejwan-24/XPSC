#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;

    if( a > b || a < b)
    {
        int mn = (a * 2) - 1;
        int mn1 = (b* 2) - 1;
        int ans = max (mn,mn1);
        cout<<ans;
    }

    else
    {
        cout<<a * 2 ;
    }
    
    return 0;
}