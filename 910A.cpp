#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,d;
	cin>>n>>d;
	string s;
	cin>>s;
	int x=0,y=0;
	while(x<n-1&&y<=n)
	{
		if(s[x]=='1')
		{
			x=x+d;y++;
		}
		else
		{
			x--;
		}
	}
	if(y>=n)
	cout<<"-1"<<endl;
	else
	cout<<y<<endl;
}
