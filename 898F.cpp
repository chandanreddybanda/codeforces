#include<bits/stdc++.h>
using namespace std;int k=1;
int pa(char* s,int a,int b)
{
	long long int x=0,y=0,z=0;
	for(int i=0;i<=a;i++)
	{
		x=x+(int(s[i])-48);
		x=x*10;
	}
	for(int i=a+1;i<=b;i++)
	{
		y=y+(int(s[i])-48);
		y=y*10;
	}
	for(int i=b+1;i<strlen(s);i++)
	{
		z=z+(int(s[i])-48);
		z=z*10;
	}
	if(x+y==z)
	{
		cout<<x/10<<"+"<<y/10<<"="<<z/10;
		k=0;
	}
}
int main()
{
	char *s;
	s=(char *)malloc (sizeof(char)*100);
	cin>>s;
	int x=(s[strlen(s)-1])-48;
	for(int i=0;i<strlen(s);i++)
	{
		for(int j=i+1;j<strlen(s);j++)
		{
			if(int(s[i])-48+int(s[j]-48==x) && k==1)
			pa(s,i,j);
		}
	}
}
