#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,k;
		cin>>n>>k;
		ll a[k];
		for(ll i=0;i<k;i++)
		{
			cin>>a[i];
		}
		sort(a,a+k);ll x=a[0]-1;
		for(ll i=1;i<k-1;i++)
		{
			x=max(x,a[i+1]-a[i]);
		}
		x=max(x,n-a[k-1]);
		cout<<x+1<<endl;
	}
}
