#include <iostream>
#include <queue>
using namespace std;

int limx,limy;
int sx,sy,ex,ey;
int mx,my;
bool map[110][110];
int bfs();

int main ()
{
	cin>>limy>>limx;
	cin>>sx>>sy>>ex>>ey;
	cin>>mx>>my;
	cout<<bfs();
	return 0;
}

struct vert
{
	int x;
	int y;
	int d;
	vert (int x1, int y1, int d1): x(x1),y(y1),d(d1){};	
};

int bfs ()
{
	vert first (sx,sy,0);
	queue<vert>tracer;
	tracer.push(first);
	while (!tracer.empty())
	{
		vert now=tracer.front();
		tracer.pop();
		int fx=ex,fy=ey;
		if (now.x==fx && now.y==fy)
		{
			return now.d;
		}
		if (map[now.x][now.y]==true) continue;
		map[now.x][now.y]=true;
		int p=mx;
		int q=my;
		int dx[]={p,q,-q,-p,-p,-q,q,p};
		int dy[]={q,p,p,q,-q,-p,-p,-q};
		for (int i=0;i<8;i++)
		{
			int x=now.x+dx[i];
			int y=now.y+dy[i];
			if (x>0 && x<=limx && y>0 && y<=limy)
			{
				vert n(x,y,now.d+1);
				tracer.push(n);
			}
		}
	}
	return -1;
}
			
	

