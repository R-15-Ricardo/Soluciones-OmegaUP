#include <bits/stdc++.h>
using namespace std;

bool isprime (int n);
int nums [10000000];

int main ()
{
	int n=1<<30;
	int cont=0;
	int p1,p2;
	while (n!=0)
	{
		cin>>n;
		p1=2;
		p2=n;
		while (p1<n)
		{
			while ((p1+p2)>n) p2--;
			if (isprime(p2))
			{
				cout<<p1<<" "<<p2<<"\n";
				break;
			}
			else
			{
				do
				{
					p1++;
				} while (!isprime(p1));
			}
		}
	}
	return 0;
}

bool isprime (int n)
{
	int check=sqrt(n);
	while (check>1)
	{
		if (n%check==0) return false;
		check--;
	}
	return true;
}
