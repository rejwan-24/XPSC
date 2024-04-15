#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        int n = a.size();
int m = b.size();                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       

        char a_l,b_l;
        int a_x1 = 0, b_x2 = 0;
        
        for(int i=0;i<n;i++)
        {
            if(a[i] != 'X')
            {
                a_l = a[i];
            }
            else
            {
                a_x1++;
            }
        }

        for(int i=0;i<m;i++)
        {
            if(b[i] != 'X')
            {
                b_l = b[i];
            }
            else
            {
                b_x2++;
            }
        }

        if(a_l == b_l)
        {
            if(a_x1 == b_x2)
            {
                 cout<<"="<<endl;
                 continue;
            }

            if(a_l == 'S')
            {
                if(a_x1 > b_x2)
                {
                    cout<<"<"<<endl;
                }

                else
                {
                    cout<<">"<<endl;
                }
            }

            else if(a_l == 'L')
            {
                if(a_x1 > b_x2)
                {
                    cout<<">"<<endl;
                }

                else
                {
                    cout<<"<"<<endl;
                }
            }
            continue;
        }


        if(a_l == 'S')
        {
           cout<<"<"<<endl;
        }

        else if(a_l == 'M' && b_l == 'S')
        {
            cout<<">"<<endl;
        }

        else if(a_l == 'M' && b_l == 'L')
        {
            cout<<"<"<<endl;
        }

        else if(a_l == 'L')
        {
            cout<<">"<<endl;
        }
    }
    return 0;
}