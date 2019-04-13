#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,l=0;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		l=l+a[i];
	}
	if(2*k*n>2*l+n)
	cout<<2*k*n-2*l-n;
	else 
	cout<<"0";
}
