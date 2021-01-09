#include<bits/stdc++.h>
//#include<iostream>
using namespace std;

void count_sort(int a[],int n)
{
    int i;
    int b[10];
    int max;

    max=a[0];
    for(i=0;i<n;i++)
    {
        if (a[i]>max)
        {
            max=a[i];
        }
    }
    int c[max+1];
    for(i=0;i<=max;++i)
    {
        c[i]=0;
    }
    for(i=0;i<n;i++)
    {
        c[a[i]]++;
    }
    for(i=1;i<=max;i++)
    {
        c[i]+=c[i-1];
    }
    for(i=n-1;i>=0;i--)
    {
        b[c[a[i]]-1]=a[i];
        c[a[i]]--;
    }
    for(i=0;i<n;i++)
    {
        a[i]=b[i];
    }
}


void print_array(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
}



int main()
{
    int a[10];
    int n;
    int i;

    cout<<"Enter Size Of Array:";
    cin>>n;
    cout<<"Enter Array Element : ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    count_sort(a,n);
    cout<<"Sorted Array Is : ";
    print_array(a,n);
    return 0;
}