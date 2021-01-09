#include<iostream>
using namespace std;


void selection_sort(int a[],int n)
{
     int i;
	 int j;
	 int min;
	 int t;
	 int temp;
    for(i=0;i<n-1;i++)
    {
        min=i;  //initilize element as minimum
        for(j=i+1;j<n;j++)
        {
            if(a[min]>a[j])
            {
                min=j; // minimum element find
            }
            temp=a[min];
            a[min]=a[i];
            a[i]=temp;
        }
        
        
    }
}

void print_array(int a[],int n)
{
	cout<<"sorted array is:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<'\t';
    }
}

int main()
{
    int i,n,a[10];
    cout<<"Enter Size Of Array : ";
    cin>>n;
    for(i=0;i<n;i++)
    {    
        cout<<"Enter Array Element "<<i<<" : ";
        cin>>a[i];

    }
    selection_sort(a,n);
    print_array(a,n);
    return 0;
}
