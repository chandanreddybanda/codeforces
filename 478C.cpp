#include <bits/stdc++.h>
#define ll long long int 
using namespace std;
ll cnt=0;
ll rec(ll a,ll b,ll c)
{
	if((a+b+c)<3||(b==0&&c==0))
	{
		return cnt;
	}
	else
	{
		cnt++;
		a-=2;b-=1;
		ll x=max(a,max(b,c)),y,z=min(a,min(b,c));
		y=a+b+c-x-z;
		return rec(x,y,z);
	}
}
int main()
{
    ll a1,b1,c1;
    cin>>a1>>b1>>c1;
    if(a1==b1&&b1==c1)
    cout<<a1<<endl;
    else
    {
    	ll sum=0,i=0;
    	while(a1!=0||b1!=0||c1!=0)
    	{
    		ll a=a1%10,b=b1%10,c=c1%10;
    		a1/=10,b1/=10,c1/=10;
        	ll x=max(a,max(b,c)),z=min(a,min(b,c));
        	ll y=a+b+c-x-z;
        	sum=sum+rec(x,y,z);
        	sum*=pow(10,i++);
        	cnt=0;
        }
        cout<<sum;
    }
}
