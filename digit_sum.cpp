#include<iostream>
using namespace std;

int digital_root(int n)
{
  int s;
  int ans;
  int r;
  if(n>9)
  {
      s=10;
      while (s>9)
      {
          s=0;
          while (n>0)
          {
              r=n%10;
              s+=r;
              n=n/10;
          }
          n=s;
          
      }
      ans=s;
  }
  else
  {
    ans=n;
  }
  return ans;
}



int main()
{
    int n;
    cin>>n;
    cout<<digital_root(n);
    return 0;
}