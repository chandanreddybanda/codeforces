#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,x=1000000001,y=0;
	cin>>n;
	long long int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(x>a[i])
		x=a[i];
	}
	long long int b[n],k=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==x)
		b[k++]=i;
	}
	for(int i=0;i<k-1;i++)
	{
		b[i]=b[i+1]-b[i];
	}
	sort(b,b+(k-1));
	cout<<b[0]<<endl;
}
