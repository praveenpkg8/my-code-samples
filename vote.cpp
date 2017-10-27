#include<iostream>
#include<set>
using namespace std;
main()
{
	int c,t,q;
	multiset<int> v;
	set<int> g;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>c;
		v.insert(c);
		g.insert(c);
	}
	for(set<int>::iterator it=g.begin();it!=g.end();it++)
	{
	cout<<*it<<"   "<<v.count(*it)-1<<endl;
	}
	cout<<v.size()-g.size();
}
