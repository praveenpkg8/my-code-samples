#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
main()
{
	int a,b,c,k,s,sum=0;
	vector<int> se,sw,r,sea,swe;
	cin>>k;
	vector<int>:: iterator it;
	for(int i=0;i<k;i++)
	{
		cin>>a;
		cin>>b;
		cin>>c;
		se.push_back(a);
		sw.push_back(b);
		sea.push_back(2*a);
		swe.push_back(2*b);
		r.push_back(c);
	}
	for(int i=0;i<k;i++)
	{
		for(int j=i+1;j<k;j++)
		{
			int h,t=0;
			h=se[i]+se[j];
			it = search(sea.begin(), sea.end(),1,h);
			if (it!=sea.end())
			{
				sum=sum+r[i]+r[j];
			}
		}
	}
}
