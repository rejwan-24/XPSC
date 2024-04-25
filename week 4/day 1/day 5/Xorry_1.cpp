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
        int ans = (1<<__lg(x));
        cout<<x-ans<<" " <<ans<<endl;
    }
    return 0;
}


