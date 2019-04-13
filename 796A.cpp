#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,k,m,d=1000,l=1000;
	cin>>n>>k>>m;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=k;i<n;)
	{
		if(a[i]<=m && a[i]!=0)
		{
		    d=i;
			break;
		}
		else
		{
			i++;
		}
	}
	for(int i=k-2;i>=0;)
	{
		if(a[i]<=m && a[i]!=0)
		{
			cout<<i;
			break;	
		}
		else
		{
			i--;
		}
	}
//cout<<10*min(k-1-l,d-k+1);
}
