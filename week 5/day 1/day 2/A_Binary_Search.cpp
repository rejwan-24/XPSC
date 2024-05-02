#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    while(k--)
    {
        int val;
        cin>>val;
        int l=0,r=n-1;
        int mid;
        bool ans = false;
        while(l <= r)
        {
            mid = (l+r) / 2;
            if(val == v[mid])
            {
                ans = true;
                break;
            }
            else if(val < v[mid])
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        if(ans == false) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}