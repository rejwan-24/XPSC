#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        ll sum = 0;
        int cnt = 0;
        bool negs = false;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            sum += abs(v[i]);
        }
        for(int i=0;i<=n;i++)
        {
            if(negs)
            {
                if(i == n || v[i] > 0)
                {
                    cnt++;
                    negs = false;
                }
            }
            else
            {
                if(v[i] < 0)
                {
                    negs = true;
                }
            }
        }
        cout<<sum<<" "<<cnt<<endl;
    }
    return 0;
}