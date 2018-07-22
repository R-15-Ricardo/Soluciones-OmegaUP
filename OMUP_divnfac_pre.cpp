#include <bits/stdc++.h>
using namespace std;

bool prime (int n);
int n_prime (int n);
void factorize (int n);

vector <int> factors;

int main ()
{
	int n;
	cin>>n;
	for (int i=n;i>1;i--)
	{
		factorize(i);
	}
	vector <int> sprimes;
	int it=1;
	while (it<n)
	{
		it=n_prime(it+1);
		if (it<=n) sprimes.push_back(it);
	}
	for (int i=0;i<sprimes.size();i++)
	{
		int nowprime=sprimes.at(i);
		//cout<<nowprime<<endl;
		sprimes.at(i)=0;
		for (int j=0;j<factors.size();j++)
		{
			if (factors.at(j)==nowprime) sprimes.at(i)++;
		}
	}
	unsigned long long int divnum=1;
	for (int i=0;i<sprimes.size();i++)
	{
		//cout<<sprimes.at(i)<<endl;
		divnum*=(sprimes.at(i)+1);
		divnum%=987654321;
	}
	cout<<divnum<<endl;
	return 0;
}

bool prime (int n)
{
	int check=int(sqrt(n));
	while (check>1)
	{
		if (!(n%check)) return 0;
		check--;
	}
	return 1;
}

int n_prime (int n)
{
	while (!prime(n)) 
	{
		n++;
	}
	return n;
}

void factorize (int n)
{
	int prime=1;
	while (n>1)
	{
		prime=n_prime(prime+1);
		if (!(n%prime))
		{
			while (!(n%prime))
			{
				factors.push_back(prime);
				n/=prime;
			}
		}
	}
}