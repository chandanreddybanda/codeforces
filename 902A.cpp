#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,a,b,f=0;
	cin>>n>>m;
	cin>>a>>b;
	if(a!=0)
	cout<<"NO"<<endl;
	else
	{
		int x,y;
		for(int i=1;i<n;i++)
		{
			cin>>x>>y;
			if(x>b)
			f=1;
			else
			b=y;
		}
		if(!f&&y>=m)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
}
