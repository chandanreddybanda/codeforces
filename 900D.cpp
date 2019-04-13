#include<bits/stdc++.h>
using namespace std;
long long int gcd(long long int a,long long int b)
{
	if(a==0||b==0)
	return a+b;
	else
	return gcd(b,a%b);
}
int main()
{
	long long int x,y;
	cin>>x>>y;
	if(y%x!=0)
	cout<<"0"<<endl;
	else
	{
		long long int a[y/x];
		for(int i=0;i<y/x;i++)
		a[i]=x;
		long long int result=a[0];
		for(int i=1;i<y/x;i++)
		result=gcd(result,a[i]);
		cout<<result<<endl;
	}
}
