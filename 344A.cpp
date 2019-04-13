#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int b,c=0;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		if(i==0)
		b=a;
		else
		{
			if(a!=b)
			c++;
			b=a;
		}
	}
	cout<<c+1<<endl;
}
