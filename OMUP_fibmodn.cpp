#include <bits/stdc++.h>
using namespace std;

int dignum=0;
int bdig [31];
long long int seta [2];
long long int setb [3];
void binar (int n);
int ccheck(long long int n);

int main ()
{
	int n;
	cin>>n;
	binar(n);
	seta[0]=0;
	seta[1]=1;
	int tw=-2;
	for (int i=2;i<dignum+1;i++)
	{
		long long int fk2=(seta[1]*seta[1])%2017;
		long long int fkm12=(seta[0]*seta[0])%2017;
		long long int bin=bdig[dignum-i];
		setb[0]=(fk2+fkm12)%2017;
		setb[2]=(((4*fk2))-(fkm12)+(tw));
		setb[1]=(setb[2]-setb[0])%2017;
		//cout<<setb[0]<<" "<<setb[1]<<" "<<setb[2]<<endl;
		if (bin==0)
		{
			seta[0]=ccheck(setb[0]%2017);
			seta[1]=ccheck(setb[1]%2017);
		}
		else
		{
			seta[0]=ccheck(setb[1]%2017);
			seta[1]=ccheck(setb[2]%2017);
		}
		tw=(bin==0)?2:-2;
		//cout<<seta[0]<<" "<<seta[1]<<endl;
	}
	cout<<seta[1]<<endl;
}

void binar (int n)
{
	while (n>0)
	{
		bdig[dignum]=n%2;
		n/=2;
		dignum++;
	}
}

int ccheck(long long int n)
{
	if (n<0) return (2017+n);
	return n;
}