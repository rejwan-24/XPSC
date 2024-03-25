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
        string x;
        string y;
        cin>>x>>y;

        for(int i=0;i<n;i++)
        {
            if(x[i] == 'G')
            {
                x[i] = 'B';
            }
            if(y[i] == 'G')
            {
                y[i] = 'B';
            }
        }

        if(x == y)
        {
            cout<<"YES"<<endl;
        }

        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}