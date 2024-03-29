#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long s;
    cin>>n>>s;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    long long int l=0,r=0,cnt = 0;
    long long int sum = 0;
    while(r < n)
    {
        sum += v[r];
        while(sum >= s)
        {
            cnt += n - r;
            sum -= v[l];
            l++;
        }
           r++;
    }
    cout<<cnt<<'\n';
    return 0;
}