#include <iostream>
#include <stack>
using namespace std;

char s[10010];
int csize (char *cad);

int main ()
{
	int n;
	cin>>s;
	n=csize(s);
	cout<<n<<endl;
	stack<char>check;
	check.push(s[0]);
	for (int i=1;i<n;i++)
	{
		if (s[i]!=false)
		{
			cout<<check.top()<<" "<<s[i]<<endl;
			if (check.top()=='<' && s[i]=='>')
			{
				check.pop();	
				s[i]=false;		
			}
			if (check.top()=='(' && s[i]==')')
			{
				check.pop();		
				s[i]=false;			
			}
			if (check.top()=='{' && s[i]=='}')
			{
				check.pop();		
				s[i]=false;						
			}
			if (check.top()=='[' && s[i]=='}')
			{
				check.pop();		
				s[i]=false;		
			}
			else
			{
				check.push(s[i]);
			}
		}
	}
	if (!check.empty())
	{
		cout<<"0";
	}
	else 
	{
		cout<<"1";
	}
}

int csize (char *cad)
{
	int i=0,num;
	while (cad[i]!=0)
	{
		i++;
		num++;
	}
	return num;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
