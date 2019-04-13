#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll r=INT_MAX,y=0,f=0;
void pay(ll n,ll m)
{
	if(n==m)
	{
		r=min(r,y);
		f=1;
	}
	else if(n<m)
	{
		y++;
		if(!f)
		pay(2*n,m);y++;
		if(!f)
		pay(n-1,m);
	}
}
int main()
{
	ll n,m;
	cin>>n>>m;
	pay(n,m);
	cout<<r;
}
