#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	long long int a[n];
	for(long int i=0;i<n;i++)
	cin>>a[i];
	long long int c=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			if(a[j]-a[i]>1 || a[i]-a[j]>1)
			c=c+a[j]-a[i];
		}
	}
	cout<<c;
}
