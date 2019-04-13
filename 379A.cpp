#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	int c=a;
	if(a<b)
	cout<<a;
	else
	{
		while(a-b+1>=b)
		{
			c++;
			a=a-b+1;
		}
		cout<<c+1;
	}
}
