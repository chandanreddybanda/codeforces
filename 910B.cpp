#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,a,b,x[10000];
	cin>>n>>a>>b;
	for(int i=0;i<6*n;i++)
	x[i]=n;
	int i=0,count=0;
	while(count!=4)
	{
		if(a<=x[i])
		{
			x[i]=x[i]-a;
			count++;
		}
		else
		i++;
		
	}
	int j=i;count=0;
	i=0;
	while(count!=2)
	{
		if(b<=x[i])
		{
			count++;
			x[i]=x[i]-b;
		}
		else
		{
			i++;
		}
	}
	cout<<max(j,i)+1;
}
