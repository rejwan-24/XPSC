#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long k;
    cin>>n>>k;
    vector<long long int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    long long int l=0,r=0,cnt = 0;
    multiset<long long int> ml;
    while(r < n)
    {
        ml.insert(v[r]);
        long long int mn,mx;
        mn = *ml.begin(),mx = *ml.rbegin();
        if((mx - mn) <= k) 
        {
            cnt += (r-l+1);
        }
        else
        {
            while(l < r)
            {
               mn = *ml.begin(),mx = *ml.rbegin();
               if((mx - mn) <= k)
               {
                   break;
               }
               auto it = ml.find(v[l]);
               ml.erase(it);
               l++;
            }
            mn = *ml.begin(),mx = *ml.rbegin();
            if((mx - mn) <= k) 
            {
                cnt += (r-l+1);
            }
        }
        r++;
    }
    cout<<cnt<<'\n';
    return 0;
}