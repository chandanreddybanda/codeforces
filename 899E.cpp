#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	long long int a[n],c=0;
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<n-1;i++)
	{
		if(a[i]!=a[i+1])
		c++;
	}
	cout<<c+1<<endl;
}
