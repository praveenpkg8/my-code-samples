#include<iostream>
#include<stdlib.h>
using namespace std;
main()
{
	int i,j,x,y,u,v,d,f,t,n,k;
	for(int k=0;k<n;k++)
	{
	cin>>x[k];//>>y[k]>>d[k];
	}
	x[k+1]=0;y[k+1]=0;
	for(int k=0;k<n;k++)
	{
	i[k]=abs(x[k]-x[k+1]);
	j[k]=abs(y[k]-y[k+1]);
	}
	if(i[k]>j[k])
	{
	t=d[k]+d[k+1]-i[k];
	cout<<t;
	}
	else if(j[k]>i[k])
	{
	t=d[k]+f[k+1]-j[k];
	cout<<t;	
	}
}
