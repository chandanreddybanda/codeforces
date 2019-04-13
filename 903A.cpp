#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int j=0;j<t;j++)
	{
		int x,a=0;
		cin>>x;
		for(int i=0;i<(x/3)+1;i++)
		{
			if((x-3*i)%7==0&&(x-3*i)>=0)
			{
				cout<<"YES"<<endl;
				a=1;
				break;
			}
		}
		if(a==0)
		cout<<"NO"<<endl;
	}
}
