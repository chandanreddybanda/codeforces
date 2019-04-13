#include<iostream>
using namespace std;
int main()
{
	long long int a,b,x,y,h,c=0,m[100000];
	cin>>a>>b>>h>>x>>y;
	while(x>0)
	{
		if(b>=x)
		{
			x=x-b;
			m[c]=1;
		}
		else if(a>y)
		{
			x=x-b;
			m[c]=1;
		}
		else
		{
			a=a+h;
			m[c]=0;
		}
		a=a-y;
		c++;
	}
	cout<<c<<endl;
	for(int i=0;i<c;i++)
	{
		if(m[i]==1)
		cout<<"STRIKE"<<endl;
		else
		cout<<"HEAL"<<endl;
	}
}
