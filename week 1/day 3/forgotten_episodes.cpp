#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    vector<int>v(n);
    for(int i=1;i<n;i++)
    {
        cin>>v[i];
    }

    sort(v.begin(),v.end());
    
    for(int i=1;i<=n;i++)
    {
       if(i != v[i])
       {
            cout<<i;
            return 0;
       }
    }

    return 0;
}