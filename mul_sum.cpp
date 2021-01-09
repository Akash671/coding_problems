#include<iostream>
using namespace std;

int solution(int number) 
{
    int i,s=0;
    for (i = 3; i < number; i++)
    {
        if (i%3==0 or i%5==0)
        {
            s+=i;
            /* code */
        }
        
    }
    return s;
    
}

int main()
{
    int n;
    cin>>n;
    cout<<solution(n);
    return 0;
}
