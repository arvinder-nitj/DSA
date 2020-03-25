#include <iostream>
#include<stack>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
	char a[]={'(',')','{','}','[',']'};

	int n=sizeof(a)/sizeof(int);
	cout<<n<<"\n";
	for (int i = 0; i < 6; ++i)
	{
		cout<<a[i]<<" = "<<(int)a[i]<<"\n";
	}
	return 0;
}