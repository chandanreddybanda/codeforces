#include<iostream>
using namespace std;
int main()
{
	string s;int m=0,n=0;
	cin>>s;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='v'&& s[i+1]=='k')
			m++;
		if((s[i]=='v'&& s[i+1]=='v')||(s[i]=='k'&&s[i+1]=='k'))
		n++;	
	}
	if(n>0)
		cout<<m+1;
	else
		cout<<m;
}
