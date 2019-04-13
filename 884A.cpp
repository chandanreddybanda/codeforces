#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,t;
	cin>>n>>t;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		a[i]=86400-a[i];
	}
	sort(a,a+n);
	int c=0,i=0;
	for(i=0;i<n;i++)
	{
		if(c<t)
		c=c+a[i];
		else
		{
			if(c==t)
			i=i-1;
			break;
		}
	}
	cout<<i;
}
