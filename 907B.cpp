#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a[9][9];
	for(int i=0;i<9;i++)
	for(int j=0;j<9;j++)
	cin>>a[i][j];
	int x,y;
	cin>>x>>y;
	x=x-1;y=y-1;
	x=x%3;y=y%3;
	x=x*3;y=y*3;
	int f=0;
	for(int i=x;i<x+3;i++)
	{
		for(int j=y;j<y+3;j++)
		{
			if(a[i][j]=='.')
			{
				f=1;
				a[i][j]='!';
			}
		}
	}
	if(f!=1)
	{
		for(int i=0;i<9;i++)
		{
			for(int j=0;j<9;j++)
			{
				if(a[i][j]=='.')
				a[i][j]='!';
				cout<<a[i][j];
				if(j%3==2)
				cout<<" ";
			}
			cout<<endl;
			if(i%3==2)
			cout<<endl;
		}
	}
	else
	{
		for(int i=0;i<9;i++)
		{
			for(int j=0;j<9;j++)
			{
				cout<<a[i][j];
				if(j%3==2)
				cout<<" ";
			}
			cout<<endl;
			if(i%3==2)
			cout<<endl;
		}	
	}
}
