#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[m];
	for(int i=0;i<m;i++)
	cin>>a[i];
	sort(a,a+m);
	int b=9999;
	for(int i=0;i<m-n+1;i++)
	{
		if(b>(a[i+n-1]-a[i]))
		b=a[i+n-1]-a[i];
	}
	cout<<b;
}
