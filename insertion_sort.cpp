#include<iostream>
using namespace std;


void insertion_sort(int a[],int n)
{
   //int i;
  // int j;
  // int key;

   for (int i = 1; i < n; i++)
   {
      int key=a[i];
      int j=i-1;
       while (j>=0 && a[j]>key)
       {
           a[j+1]=a[j];
           j=j-1;
       }
       a[j+1]=key;
       
       /* code */
   }
   
}



print_insertion_sort(int a[],int n)
{
   // int i;
    cout<<"Insertion Sort Element IS : ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
        cout<<"\t";
    }
}


int main()
{
    //int i;
    int n;
    int a[10];

    cout<<"Enter the Size Of Array : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter The Array Element "<<i<<" : ";
        cin>>a[i];
    }
    insertion_sort(a,n);
    print_insertion_sort(a,n);
    return 0;
}
