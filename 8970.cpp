#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	string s;
	cin>>s;
	for(int i=0;i<m;i++)
	{
		int x,y;
		char a,b;
		cin>>x>>y>>a>>b;
		for(int j=x-1;j<y;j++)
		{
			if(s[j]==a)
			s[j]=b;
		}
	}
	cout<<s;
}
