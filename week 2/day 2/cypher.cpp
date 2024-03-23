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
        vector<int> v(n);

        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }

        for(int i=0;i<n;i++)
        {
            int b;
            cin>>b;
            string s;
            cin>>s;

            for(int j=0;j<b;j++)
            {
                if(s[j] == 'D')
                {
                    if(v[i] == 9)
                    {
                        v[i] = 0;
                        continue;
                    }

                    else
                    {
                        v[i] ++;
                    }
                } 

                else
                {
                    if(v[i] == 0)
                    {
                        v[i] = 9;
                        continue;
                    }

                    else
                    {
                        v[i]--;
                    }
                }
            }
        }

        for(int i=0;i<n;i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}