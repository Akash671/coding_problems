#include<iostream>
using namespace std;

int main()
{
    int i,j,n,a;
    cin>>n;
    for (i=0; i < n; i++)
    {
        a=0;
        for ( j = 0; j < n; j++)
        {
            if (j==n-1-i)
            {
                cout<<"*";
                a=1;
                /* code */
            }
            else if(a==1)
            {
                cout<<"1";
                /* code */
            }
            else
            {
                cout<<"0";
            }
        }
        cout<<endl;
        
        /* code */
    }
    return 0;
}
