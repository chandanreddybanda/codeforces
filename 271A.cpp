#include<iostream>
using namespace std;
int check(int y)
{
	int a=y%10,b=(y/10)%10,c=(y/100)%10,d=(y/1000);
	if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d)
	return 1;
	else
	return 0;
}
int main()
{
	int n;
	cin>>n;
	for(int i=n+1;i<=9012;i++)
	{
		if(check(i))
		{
			cout<<i;break;
		}
	}
}
