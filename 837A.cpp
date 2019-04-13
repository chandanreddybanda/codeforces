#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,t=0,a[1000],l=0;
	cin>>n;
	char c[n];
	cin>>c;
	for(int i=0;i<n;i++)
	{
		if(c[i]!=' ')
		{
			if(c[i]>='A'&&c[i]<='Z')
			t++;
		}
		else
		{
		
			a[l]=t;t=0;
			l++;
		}
	}
	if(l!=0)
	for(int i=0;i<l;i++)
	cout<<a[i]<<" ";
	else 
	cout<<t;
}
