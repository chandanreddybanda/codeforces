#include<bits/stdc++.h>
using namespace std;
long long int b[5000];
int main()
{
	long long int n;
	cin>>n;
	long long int a[n];
	for(long int i=0;i<n;i++)
	cin>>a[i];
	sort(a,a+n);
	int x=0,y=0;
	for(int i=0;i<n-1;i++)
	{
		if(a[i]==a[i+1])
		{
			x++;
		}
		else
		{
			if(x>y)
			y=x;
			x=0;
		}
	}
	if(x>y)
	cout<<x+1;
	else
	cout<<y+1;
}
