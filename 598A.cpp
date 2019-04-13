#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main ()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll c=0,n;
        cin>>n;
        for(ll i=1;i<=n;i++)
        {
			ll x=i^(i-1);
			if(x==(2*i)-1)
        	c=c-i;
        	else
        	c=c+i;
		}
        cout<<c<<endl;
    }
}
