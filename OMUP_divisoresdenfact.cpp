#include <bits/stdc++.h>
using namespace std;

int primesl [1000010];

void prime_initializer(int n);

int main ()
{
	int n;
	unsigned long long int div=1;
	cin>>n;
	prime_initializer(n);
	for (int i=2;i<=n;i++)
	{
		if (!primesl[i])
		{
			unsigned long long int sum=0;
			int np=1;
			while (int(n/(pow(i,np)))!=0)
			{
				//cout<<n<<","<<np<<","<<int(pow(i,np))<<": "<<int(n/pow(i,np))<<endl;
				sum+=int(n/pow(i,np))%987654321;
				np++;
			}
			div*=(sum+1)%987654321;
			div%=987654321;
		}
	}
	cout<<div<<endl;
	return 0;
}

void prime_initializer (int n)
{
	primesl[0]=1;
	primesl[1]=1;
	for (int i=2;i<n;i++)
	{
		if (!primesl[i])
		{
			for (int j=2*i;j<=n;j+=i) primesl[j]=1;
		}
	}
}






















