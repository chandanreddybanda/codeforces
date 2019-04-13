#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n],h=0;
	for(int i=0;i<n;i++)
	{
		char c;
		cin>>c;
		a[i]=int(c);
		if(a[i]<=90)
		a[i]=a[i]+32;
	}
	sort(a,a+n);
	for(int i=0;i<n-1;i++)
	{
		if(a[i]!=a[i+1])
		h++;
	}
	if(h==25)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
}
