#include<iostream>
using namespace std;

int partition(int a[],int p,int r)
{
    int i;
    int j;
    int temp;
    int pi;

    pi=a[r];
    i=p-1;
    for(j=p;j<r;j++)
    {
        if(a[j]<=pi)
        {
            i+=1;
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    temp=a[i+1];
    a[i+1]=a[r];
    a[r]=temp;
    return i+1;
}

void quick_sort(int a[],int p,int r)
{
    int q;
    if(p<r)
    {
        q=partition(a,p,r);
        quick_sort(a,p,q-1);
        quick_sort(a,q+1,r);
    }
}

print_quick_sort(int a[],int n)
{
    int i;
    cout<<"quick sort element is: ";
    for(i=0;i<n;i++)
    {
        cout<<a[i];
        cout<<"\t";
    }
}

int main()
{
    int n;
    int i;
    int a[10];

    cout<<"Enter The Size Of Array:";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter Array Element "<<i+1<<":";
        cin>>a[i];
    }
    quick_sort(a,0,n-1);
    print_quick_sort(a,n);
    return 0;
}
