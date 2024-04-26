#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,b;
        cin>>n>>b;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        //bool flag = false;
        int cnt =0;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if((v[i] & v[j]) == b)
                {
                   // flag = true;
                    cnt++;
                    break;
                }
            }
        }
        //if(flag) cout<<"YES"<<endl;
        if(cnt > 0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}