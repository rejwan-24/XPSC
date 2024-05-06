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
    int q;
    cin>>q;
    while(q--)
    {
        int val;
        cin>>val;
 
        //use lower bound & upper bound concept of binary search
    
        int ans= upper_bound(v.begin(),v.end(),val) - v.begin();
    
        cout<<ans<<endl;
    }
    return 0;
}
