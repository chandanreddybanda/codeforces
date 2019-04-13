#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll sum(ll a[],ll si,ll ei)
{
	ll x=0;
	for(ll i=si;i<=ei;i++)
	x+=a[i];
	return x;
}
int main()
{
	ll n;
	cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++)
	cin>>a[i];
	ll s=sum(a,0,n-1);
	if(s%3!=0)
	cout<<"0"<<endl;
	else
	{
		s/=3;
		ll i=0,k=0,j=0,c=0;
		while(k!=s)
		k+=a[i],i++;
		k=0;
		for(j=i;j<n;j++)
		{
			if(k!=s)
			k+=a[j];
			else
			{
				k=0;
				c++;
			}
		}
		if(k==s)
		c++;
		cout<<c<<endl;
	}
}
