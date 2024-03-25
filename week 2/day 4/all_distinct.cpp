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
        set<int> s;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            s.insert(x);
        }

        int ans = n - s.size();
        
        if(ans % 2 == 0)
        {
            cout<<s.size()<<endl;
        }
        else
        {
            cout<<s.size()-1<<endl;
        }
    }
    return 0;
}