#include <bits/stdc++.h>
using namespace std;

char quita[1000010];
char s[1000010];
char res [100010];

int soq ();
int sos ();
int sow (int i, int t1);

int main ()
{
	cin.getline(s,sizeof(s));
	cin.clear();
	cin>>quita;
	int c=0;
	int t1=sos();
	int t2=soq();
	for (int i=0;i<t1;i)
	{
		int n=sow(i,t1);
		//cout<<n<<endl;
		char *a;
		a=new char [n];
		for (int j=0;j<n;j++)
		{
			a[j]=s[i+j];
		}
		for (int j=0;j<t2;j++)
		{
			for (int k=0;k<n;k++)
			{
				if (a[k]==quita[j]) a[k]=' ';
			}
		}
		for (int j=0;j<n;j++)
		{
			if (a[j]!=' ') 
			{
				res[c]=a[j];
				//cout<<a[j]<<"->"<<res[c]<<" "<<c<<endl;
				c++;
			}
			//cout<<res[c];
		}
		res[c]=' ';
		c++;
		//cout<<a<<endl;
		i+=n+1;
		delete []a;
	}
	cout<<res<<endl;
	return 0;
}

int sow (int i, int t1)
{
	int n=0;
	while (s[i+n]!=' ' && (i+n)<t1)
	{
		n++;	
	}
	return n;
}

int soq ()
{
	int i=0;
	while (quita[i] || quita[i+1]) i++;
	return i;
}

int sos ()
{
	int i=0;
	while (s[i] || s[i+1]) i++;
	return i;
}


