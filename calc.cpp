#include<iostream>
using namespace std;
main()
{
	string s;
	getline(cin,s);
	for(int i=0;i<s.length();i++)
	{
		if(s[i]==43 || s[i]==45)
		{
			if(s[i]==43)
			{
			cout<<s[i-1]+s[i+1]-96;
			}
			else
			{
			cout<<s[i-1]-s[i+1];
			}		
		}
	}
}
