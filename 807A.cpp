#include<iostream>
using namespace std;
int main()
{
	long long int a,b,c,k=0;
	int n;
	cin>>a>>b>>c;
	cin>>n;
	int m[n];
	for(int i=0;i<n;i++)
	{
		cin>>m[i];
		for(int j=b+1;j<c;j++)
		{
			if(j==m[i])
			k++;
		}
	}
	cout<<k;
}
