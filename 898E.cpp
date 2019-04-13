#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	long long int a[n],b[n],c=0,x=0,z[n],k=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		long long int x=sqrt(a[i]);
		b[i]=min((a[i]-x*x),((x+1)*(x+1)-a[i]));
		if(b[i]==0)
		z[k++]=a[i];
	}
	sort(b,b+n);sort(z,z+k);
	if(k>n/2)
	{
		int l=0;
		for(int i=k-1;i>=n/2;i--)
		{
			if(z[i]==0)
			l=l+2;
			else
			l++;
		}
		cout<<l<<endl;
	}
	else
	{
		for(int i=0;i<n/2;i++)
		c=c+b[i];
		cout<<c<<endl;
	}
}
