#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<int>v(n);
    long long int sum = 0;

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        sum += v[i];
    }
   
    if(sum % 2 == 0) 
    {
        cout<<sum;
    }


    else
    {
        sort(v.begin(),v.end());

        for(int i=0;i<n;i++)
        {    
            if(v[i] % 2 != 0)
            {
                sum -= v[i];
                break;
            }
        }    
        cout<<sum;
    }

    return 0;
}