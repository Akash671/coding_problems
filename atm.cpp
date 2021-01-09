#include <iostream>
using namespace std;


int main()
{
    int w;
    float cb;
   // float ch=0.50;
    cin>>w>>cb;
    if(w+0.5<cb && w%5==0)
    {
	//float rm;
	cb=cb-w-0.5;
	printf("%0.2f",cb);
    }
    else
    {
	printf("%0.2f",cb);
    }
    return 0;
}
