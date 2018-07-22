#include <bits/stdc++.h>
using namespace std;

int tabla [3];
int cofre [3];
void bsorta ();
void bsortb ();

int main ()
{
	for (int i=0;i<3;i++)
	{
		cin>>tabla[i];
	}
	for (int i=0;i<3;i++)
	{
		cin>>cofre[i];
	}
	bsorta();
//	for (int i=0;i<3;i++)
//	{
//		cout<<tabla[i];
//	}
//	cout<<"\n";
	bsortb();
//	for (int i=0;i<3;i++)
//	{
//		cout<<cofre[i];
//	}
//	cout<<"\n";
	int greenlight=0;
	for (int i=0;i<3;i++)
	{
		if (tabla[i]<=cofre[i]) greenlight++;
	}
	if (greenlight==3) cout<<"1";
	else cout<<"0";
	return 0;
}

void bsorta () 
{
	volatile int aux;
	for (int i=0;i<3-1;i++)
	{
		for (int j=0;j<3-1-i;j++)
		{
			if (tabla[j]>tabla[j+1])
			{
				aux=tabla[j];
				tabla[j]=tabla[j+1];
				tabla[j+1]=aux;
			}
		}
	}
}
				
void bsortb () 
{
	volatile int aux;
	for (int i=0;i<3-1;i++)
	{
		for (int j=0;j<3-1-i;j++)
		{
			if (cofre[j]>cofre[j+1])
			{
				aux=cofre[j];
				cofre[j]=cofre[j+1];
				cofre[j+1]=aux;
			}
		}
	}
}		
