#include <iostream>
#include <climits>
using namespace std;

int reverse(int x)
{
	int res=0;
	while(x!=0)
	{
		cout<<res<<endl;
		res=res*10+x%10;
		x=x/10;
	}
	return ((x<INT_MIN)||(x>INT_MAX))?0:res;
}

int main()
{
	int x=1534236469;
	int res=reverse(x);
	cout<<res<<endl;
}


