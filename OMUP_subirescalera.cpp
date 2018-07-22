#include <iostream>
using namespace std;

unsigned long long int scal (unsigned long long int n, unsigned long long int *sz)
{
	if (sz[n-1]!=0)
	{
		return sz[n-1];
	}
	if (n==1)
	{
		sz[n-1]=1;
		return sz[n-1];
	}
	if (n==2)
	{
		sz[n-1]=2;
		return sz[n-1];
	}
	if (n==3)
	{
		sz[n-1]=4;
		return sz[n-1];
	}
	sz[n-1]=scal(n-1,sz)%2017+scal(n-2,sz)%2017+scal(n-3,sz)%2017;
	return sz[n-1]%2017;
}

int main ()
{
	unsigned long long int n,*sz;
	cin>>n;
	sz=new unsigned long long int [n+1];
	for (int i=0;i<n;i++)
	{
		sz[i]=0;
	}
	cout<<scal(n,sz);
}
