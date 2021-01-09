#include<iostream>
using namespace  std;

int main()
{
   int i,n,s=0,t,r;
   cin>>t;
   for (i = 0; i < t; i++)
   {
       cin>>n;
       s=0;
       while (n>0)
       {
           r=n%10;
           s=s*10+r;
           n=n/10;
           /* code */
       }
       //cout<<endl;
       cout<<s<<endl;;
       /* code */
   }
   return 0;
}

