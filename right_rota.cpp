#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,d;
    cin>>n>>d;

    int a[10];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
  // logic....
    for(int i=0;i<d;i++)
    {
        int temp=a[n-1]; //reserve last location of array
        for(int j=n-1;j>-1;j--)
        {
            a[j]=a[j-1];
        }
        a[0]=temp;  //put last element in start location..
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}

/**
4 2
1 2 3 4
3 4 1 2
**/
