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
        for(int i=1;i<=n;i++)
        {
            cout<<(i << 1)<<" ";
        }
        cout<<endl;
    }
    return 0;
}

// it can solve this way ->

/* 
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
        if(n % 2 == 0)
        {
            for(int i=0;i<n;i++)
            {
                cout<<2*(i+1)<<" ";
            }
            cout<<endl;
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                cout<<i+1<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
} */
