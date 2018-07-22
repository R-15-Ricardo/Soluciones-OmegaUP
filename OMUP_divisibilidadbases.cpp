#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

short charfinder (char x);
char charnum[1000001];
int digsum;

int main ()
{
	optimizar_io;
	int dignum,base;
	cin>>dignum>>base>>charnum;
	for (int i=0;i<dignum;i=i+2)
	{
		//cout<<i<<endl;
		digsum+=charfinder(charnum[dignum-i-1]);
		if ((dignum-i-2)>-1) 
		{
			digsum-=charfinder(charnum[dignum-i-2]);
		}
	}
	//cout<<digsum<<endl;
	if (!(digsum%(base+1))) cout<<"S";
	else cout<<"N";
	return 0;
}

short charfinder (char x)
{
	for (int i=0;i<10;i++)
	{
		if (x==48+i) return i; 
	}
}
