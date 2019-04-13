#include<bits/stdc++.h>
#define ll long long int
using namespace std;ll ans=0;
int main()
{
    ll n,m;
    cin>>n>>m;
    if(n==m)
    cout<<"0"<<endl;
    else if(n>m)
    cout<<n-m<<endl;
    else
    {
    	while(n*2<=m)
    	{
    		n=n*2;
    		ans++;
		}
		ans+=m-n;
		cout<<ans<<endl;
	}
}
