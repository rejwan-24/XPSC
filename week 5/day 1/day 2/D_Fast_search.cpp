#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int k;
    cin>>k;
    while(k--)
    {
        int l,r;
        cin>>l>>r;

        //use lower bound & upper bound concept of binary search
        int left = lower_bound(v.begin(),v.end(),l) - v.begin();
        int right = upper_bound(v.begin(),v.end(),r) - v.begin();
        int ans = right - left;
        cout<<ans<<" ";
    }
    return 0;
}