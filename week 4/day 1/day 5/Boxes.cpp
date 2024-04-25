#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<long long int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.rbegin(),v.rend());
        multiset<long long int> s;
        for(int i=0;i<n;i++)
        {
            if(!s.size())
            {
                s.insert(v[i]);
            }
            else
            {
                long long int val = *(--s.end());
                if(val >= v[i])
                {
                    s.erase(--s.end());
                    s.insert((val ^ v[i]));
                }
                else
                {
                    s.insert(v[i]);
                }
            }
        }
        cout<<s.size()<<endl;
    }
    return 0;
}