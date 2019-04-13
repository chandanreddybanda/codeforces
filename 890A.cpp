#include<iostream>
using namespace std;
int main()
{
	int a[6],n=0;
	for(int i=0;i<6;i++)
	{
		cin>>a[i];
		n=n+a[i];
	}
	n=n/2;int h=0,g=0;
	for(int i=0;i<6;i++)
	{
		for(int j=i+1;j<6;j++)
		{
			for(int k=j+1;k<6;k++)
			{
				if(a[i]+a[j]+a[k]==n)
				{
					cout<<"YES";
					h=1;
					g=1;
					break;
				}
				else
				g=0;
			}
			if(h==1)
			break;
		}
		if(h==1)
		break;
	}
	if(g==0)
	cout<<"NO";
}
