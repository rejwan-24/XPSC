#include <bits/stdc++.h>
using namespace std;
int s_d(vector<int>&v,int n)
{
    int sum = 0;
    for(int i=0;i<n-1;i++)
    {
        sum += abs(v[i] - v[i+1]);
    }
    return sum;
} 
int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int maxs = s_d(v,n);
        for(int i=0;i<n;i++)
        {
            int ini = v[i];
            v[i] = 1;
            int ns1 = s_d(v,n);
            maxs = max(maxs,ns1);
            v[i] = k;
            int ns2 = s_d(v,n);
            maxs = max(maxs,ns2);
            v[i] = ini;
        }
        cout<<maxs<<endl;
    }
}
