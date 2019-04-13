#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];	
	int q;
	cin>>q;
	for(int k=0;k<q;k++)
	{
		int l,r,x,y;
		cin>>l>>r>>x>>y;
		for(int i=l-1;i<r;i++)
		{
			if(a[i]==x)
			a[i]=y;
		}
	}
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
}
