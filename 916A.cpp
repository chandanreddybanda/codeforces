#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll maxn=2e5+7,ans=0;
ll rec(ll h,ll m,ll x)
{
	if(h%10==7||m%10==7||(h/10)%10==7||(m/10)%10==7)
	return ans;
	else
	{
		if(m<x)
		{
			if(h==0)
			h=23;
			else
			(h--)%24;
			m=60+(m-x)%60;
		}
		else
		m=(m-x)%60;
		ans++;
		rec(h,m,x);
	}
}
int main()
{
	ll x,h,m;
	cin>>x>>h>>m;
	if(h%10==7||m%10==7||(h/10)%10==7||(m/10)%10==7)
	cout<<"0"<<endl;
	else
	cout<<rec(h,m,x)<<endl;
}
