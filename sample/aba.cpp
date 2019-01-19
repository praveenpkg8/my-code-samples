#include<iostream>
#include<string.h>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
/*string getstring
{
	string s;
	getline(cin,s);
	
}
void getstring()
{
	int c;
	string s,k;
	getline(cin,s);
	k=s;
	reverse(k.begin(), k.end()); 
	s=s+k; 
	cin>>c;
	cout<<s.at(c)<<endl;
}*/
main()
{
	int t;
	int c;
	string s,k;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	//getline(cin,s);
	cin>>s;
	k=s;
	reverse(k.begin(), k.end()); 
	s=s+k; 
	cin>>c;
	cout<<s[c-1]<<endl;
	}
}
