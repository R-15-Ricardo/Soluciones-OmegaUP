#include <bits/stdc++.h>
using namespace std;

vector <int> a;
vector <int> b;
vector <int> c;

int main ()
{
	int n;
	cin>>n;
	int aux;
	for (int i=0;i<n;i++)
	{
		cin>>aux;
		a.push_back(aux);
	}
	for (int i=0;i<n;i++)
	{
		cin>>aux;
		b.push_back(aux);
	}
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	reverse(b.begin(),b.end());
	bool carr=0;
	for (int i=0;i<n;i++)
	{
		int sum=a.at(n-i-1)+b.at(n-i-1);
		if (carr) sum++;
		int dig=sum%10;
		c.push_back(dig);
		carr=(sum>9)?1:0;
	}
	if (carr) c.push_back(1);
	for (int i=0;i<c.size();i++)
	{
		cout<<c.at(c.size()-i-1);
	}
	cout<<"\n";
	return 0;
}