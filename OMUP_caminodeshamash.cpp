#include <bits/stdc++.h>
using namespace std;

int maxpowfinder (int n);
void braker (int chunk, int pow);

int main ()
{
	int num,maxpow,*save;
	cin>>num;
	maxpow=maxpowfinder(num);
	save=new int [maxpow];
	volatile int auxmain=num;
	for (int i=0;i<maxpow+1;i++)
	{
		save[i]=auxmain/(int)pow(60,maxpow-i);
		auxmain=auxmain%(int)pow(60,maxpow-i);
	}
	for (int i=0;i<maxpow+1;i++)
	{
		braker(save[maxpow-i],maxpow-i);
	}
	return 0;
}

void braker (int chunk, int pow)
{
	while (chunk>=10)
	{
		cout<<"L";
		chunk-=10;
	}
	while (chunk>0)
	{
		cout<<"I";
		chunk--;
	}
	if (pow>0) cout<<".";
}

int maxpowfinder (int n)
{
	volatile int aux=n;
	int cont;
	while (aux>0)
	{
		aux/=60;
		cont++;
	}
	return cont-1;
}
