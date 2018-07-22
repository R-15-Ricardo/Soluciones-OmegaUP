#include <iostream>
using namespace std;

int r;
void bsearch (int *a,int i,int d,int b)
{
	int m=0;
	if (i>d)
	{
		r=0;
	}
	else 
	{
		m=(i+d)/2;
		if (a[m]<b)
		{
			i=m+1;
			bsearch (a,i,d,b);
		}
		if (a[m]>b)
		{
			d=m-1;
			bsearch (a,i,d,b);
		}
		if (a[m]==b)
		{
			r=m+1;
		}
	}
}

int main ()
{
	int *p,*l,n,m,j;
	cin>>n;
	p=new int [n];
	for (int i=0;i<n;i++)
	{
		cin>>p[i];
	}
	cin>>m;
	l=new int [m];
	for (int i=0;i<m;i++)
	{
		cin>>l[i];
	}
	for (int k=0;k<m;k++)
	{
		bsearch (p,0,(n-1),l[k]);
		l[k]=r;
	}
	for (int i=0;i<m;i++)
	{
		cout<<l[i]<<" ";
	}
	delete []l;
	delete []p;
}
