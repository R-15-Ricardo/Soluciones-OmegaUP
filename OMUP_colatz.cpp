#include <bits/stdc++.h>
using namespace std;

int cola (int n);

int main ()
{
	int lenght;
	int max[2];
	for (int i=1;i<1000000;i++)
	{
		lenght=cola(i);
		if (lenght>max[0])
		{
			max[0]=lenght;
			max[1]=i;
		}
	}
	cout<<max[1]<<": "<<max[0]<<endl;
	return 0;
}

int cola (int n)
{
	long long int aux=n;
	long int step=1;
	while (aux>1)
	{
		aux=(aux%2)?((aux*3)+1):(aux/2);
		step++;
	}
	return step;
}