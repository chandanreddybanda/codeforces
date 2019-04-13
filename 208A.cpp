#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int l=s.length(),h=1;
	for(int i=0;i<l;i++)
	{
		if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B'&&i<l-2)
		{
			i=i+2;
			if(!h)
			{
				cout<<" ";
				h=1;
			}
		}
		else
		{
			h=0;
			cout<<s[i];
		}
	}
}
