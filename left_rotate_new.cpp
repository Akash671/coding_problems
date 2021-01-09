#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(int n,int a[])
{
   //rotate array in left side;
   int temp=a[n-1];
   for(int i=n-1;i>0;i--)
   {
   	// 1 2 3 4
   	// 2 3 4 1
   	a[i]=a[i-1];
   }
   a[0]=temp;
 //  return a;
 for(int i=0;i<n;++i)
 {
 	cout<<a[i]<<" ";
 }
}


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
		{
			cin>>a[i];
		}
       solve(n,a);
      
	}
	cout<<endl;
	return 0;
}
