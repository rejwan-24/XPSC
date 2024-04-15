#include<bits/stdc++.h>
using namespace std;
int main()
{
    int te;
    cin>>te;
    while(te--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<long long int> v;
        long long int t = 0;
        for(int i=0;i<n;i++)
        {
            if(s[i] == 'L')
            {
                v.push_back((n - 1 - i) - i);
                t+= i;
            }

            else
            {
                v.push_back(i - (n - 1 - i));
                t+= n - 1 - i;
            }
        }
        
        sort(v.begin(),v.end(),greater<int>());

        for(int i=0;i<n;i++)
        {
            if(v[i] > 0)
            {
                t += v[i];
            }
            cout<<t<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}