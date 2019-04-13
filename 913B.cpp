#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll a[1001][1001],b[1001];
int main ()
{
    ll n;
    cin>>n;
	a[n+1][n+1];
	b[n+1];
    for(ll i=1;i<n;i++)
    {
    	ll x;
    	cin>>x;
    	a[x][i+1]=1;
    	b[x]=1;
	}
	ll y=0;
	for(ll i=1;i<=n;i++)
	{
		ll x=0;
		for(ll j=1;j<=n;j++)
		{
			if(a[i][j]==1&&b[j]!=1)
			x++;
		}
		if((x==1||x==2)||(x<3&&b[i]==1))
		{
			y=1;
			cout<<"NO"<<endl;
			break;
		}
	}
	if(y==0)
	cout<<"YES"<<endl;
}
