#include <iostream>
using namespace std;

bool track[1000];
int ord[1000];

struct mon
{
	int x;
	int y;
};

int dist (mon a, mon b);

int main ()
{
	int nmones,df,indexord=0;
	mon *mones;
	cin>>nmones;
	int cdmones;
	cdmones=nmones;
	mones=new mon [nmones];
	for (int i=0;i<nmones;i++)
	{
		cin>>mones[i].x>>mones[i].y;
	}
	mon base;
	base.x=0;
	base.y=0;
	while (cdmones!=0)
	{
		int mind=1<<30;
		int mindi=0;
		for (int i=0;i<nmones;i++)
		{
			if (!track[i])
			{
				int nowd=dist(base,mones[i]);
				if (nowd<mind)
				{
					mind=nowd;
					mindi=i;
				}
			}
		}
		df+=mind;	
		track[mindi]=true;
		base=mones[mindi];
		cdmones--;		
		ord[indexord]=mindi+1;
		indexord++;
	}
	cout<<df<<endl;
	for (int i=0;i<nmones;i++)
	{
		cout<<ord[i]<<" ";
	}
	return 0;
}

int dist (mon a, mon b)
{ 
	int d=0,x=(a.x-b.x),y=(a.y-b.y);
	x*=(x<0)?-1:1;
	y*=(y<0)?-1:1;
	d=x+y;
	return d;
}













