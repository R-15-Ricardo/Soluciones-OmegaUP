#include <bits/stdc++.h>
using namespace std;

int dig (char c);
int sstring ();
char text[100000010];

int main ()
{
	cin.getline(text,sizeof(text));
	for (int i=0;i<sstring();i+=2)
	{
		if (text[i]==' ')
		{
			i--;
			cout<<"\n";
		}
		else
		{
			int a,b;
			a=dig(text[i])*16;
			b=dig(text[i+1]);
			cout<<char(a+b);
		}
	}
	return 0;
}

int dig (char c)
{
	int out;
	out=int(c)-48;
	out=(out>9)?int(c)-55:out;
	return out;
}

int sstring ()
{
	int i=0;
	while (text[i])
	{
		i++;
		if (text[i+1]) i++;
	}
	return i;
}

