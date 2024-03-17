#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    for(int es=0;es<=c/a;es++)
    {
        int t_d_b_es = es * a;
        int r_d = c - t_d_b_es;

        if(r_d % b == 0)
        {
            cout<<"Yes";
            return 0;
        }
    }

    cout<<"No";
    return 0;
}