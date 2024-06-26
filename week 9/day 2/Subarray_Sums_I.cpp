#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,x;
    cin>>n>>x;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    ll cnt = 0,sum = 0;
    int l=0,r=0;
    while(l < n)
    {
        sum += v[l];
        while(sum >= x)
        {
            if(sum == x)
            {
                cnt++;
            }
            sum -= v[r];
            r++;
        }
        l++;
    }
    cout<<cnt<<endl;
    return 0;
}