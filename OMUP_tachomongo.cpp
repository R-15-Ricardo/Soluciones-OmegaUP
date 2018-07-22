#include <bits/stdc++.h>
using namespace std;

int D (int x1, int  y1, int x2, int y2);
int mon[10000000][3];
int idl [1000000];

int main ()
{	
	int n;
	cin>>n;
	int td=0;
	for (int i=0;i<n;i++)
	{
		cin>>mon[i][0]>>mon[i][1];
	}
	int nowx=0,nowy=0;
	int it=0;
	for (int i=0;i<n;i++)
	{
		int min=1<<30;
		for (int j=0;j<n;j++)
		{
			if (!mon[j][2])
			{
				int dist=D(nowx,nowy,mon[j][0],mon[j][1]);
				if (dist<min)
				{
					min=dist;
					idl[it]=j+1;
				}
			}
		}
		nowx=mon[idl[it]-1][0];
		nowy=mon[idl[it]-1][1];
		mon[idl[it]-1][2]=1;
		td+=min;
		it++;
	}
	cout<<td<<endl;
	for (int i=0;i<n;i++)
	{
		cout<<idl[i]<<" ";
	}
	cout<<endl;
	return 0;
}

int D (int x1, int  y1, int x2, int y2)
{
	int res=abs(x1-x2)+abs(y1-y2);
	return res;
}