#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll maxn=2e5+7;
int main()
{
	ll x,h,m;
	cin>>x>>h>>m;
	if(h%10==7||m%10==7||(h/10)%10==7||(m/10)%10==7)
	cout<<"0"<<endl;
	else if(m<7)
	{
		if(h==18||h==8)
		{
			if(m%x==0)
			cout<<m/x<<endl;
			else
			{
				m=m+3;
				while(m%x!=0)
				{
					m=m+10;
				}
				cout<<m/x<<endl;
			}
		}
		else
		{
			if((m+3)%x==0)
			cout<<(m+3)/x<<endl;
			else
			{
				m=m+3;
				while(m%x!=0)
				m+=10;
				cout<<m/x<<endl;
			}
		}
	}
	else if(m>57)
	{
		if((m-57)%x==0)
		cout<<(m-57)/x<<endl;
		else
		{
			m=m-57;
			while(m%x!=0)
			m+=10;
			cout<<m/x<<endl;
		}
	}
	else
	{
		//cout<<ceil((m-(((m-10)/10)*10+7))/x)<<endl;
		if((m-(((m-10)/10)*10+7))%x==0)
		cout<<(m-(((m-10)/10)*10+7))/x<<endl;
		else
		{
			m=m-(((m-10)/10)*10+7);
			while(m%x!=0)
			m+=10;
			cout<<m/x<<endl;
		}
	}
}
