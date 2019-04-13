#include<bits/stdc++.h>
using namespace std;
long long int rev(long long int n)
{
	long long int num=0,t=n,c=0;
	while(n!=0)
	{
		num=10*num+(n%10);
		n=n/10;
		c++;
	}
	return num+t*pow(10,c);
}
int main()
{
	long long int n=1,c=0;
	long long int k,p;
	cin>>k>>p;
	while(k--)
	{
		c=(c+rev(n))%p;
		n++;
		//cout<<rev(n)<<" ";
	}
	cout<<c%p;
}
