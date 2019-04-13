#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n],l=0,y=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(i<n&&i>0)
		{
		if(a[i-1]>a[i])
		{
			if(l>y)
			y=l;
			l=0;
		}
		else
		l++;
		}
	}
	if(l>y)
	y=l;
	cout<<y+1<<endl;
}
/*
6
2 2 1 3 4 1
*/
