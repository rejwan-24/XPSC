#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--) 
    {
        long long int n,q;
        cin>>n>>q;
        vector<long long int> v(n+1,0);
        
        for (int i=1;i<=n;i++) 
        {
            cin>>v[i];
        }
        
        vector<long long int> pre(n+1,0);

        for(int i=1;i<=n;i++)
        {
            pre[i] = pre[i -1] + v[i];
        }
        

        while(q--) 
        {
            long long int l,r,k;
            cin>>l>>r>>k;

            long long int sum = pre[n];
            sum -= (pre[r] - pre[l-1]);
            sum += ((r-l+1LL)) *k;

            if (sum % 2LL == 1LL)
            {
                cout << "YES"<<'\n';
            } 

            else 
            {
                cout<<"NO"<<'\n';
            }
        }
    }
    
    return 0;
}
