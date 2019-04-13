#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll maxn=2e5+7;
int main()
{
	string s;
	cin>>s;
	string srev=s;
	reverse(srev.begin(),srev.end());
	if(s==srev)
	cout<<"0"<<endl;
	else
	{
	    ll x=(s[1]-'0')+(s[0]-'0')*10,x1=(s[0]-'0')+(s[1]-'0')*10,x2=((x+1)%10)*10+((x+1)/10);
	    ll y=(s[4]-'0')+(s[3]-'0')*10;
	    if(x==15&&y>51)
	    cout<<2+(60-y)+(20-x-1)*60;
	    else if(x==23&&y>32)
	    cout<<60-y<<endl;
	    else if(x==5&&y>50)
	    cout<<1+(60-y)+(10-x-1)*60;
	    else if((x>5&&x<10))
	    {
	        ll ans=1+(60-y)+(10-x-1)*60;
	        cout<<ans<<endl;
	    }
	    else if((x>15&&x<20))
	    {
	        ll ans=2+(60-y)+(20-x-1)*60;
	        cout<<ans<<endl;
	    }
	    else
	    {
	        if(y>x1)
	        cout<<60-y+x2<<endl;
	        else
	        cout<<x1-y<<endl;
	    }
	}
}
