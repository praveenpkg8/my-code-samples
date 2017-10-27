#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void lps(char*ptn,int n,int* lp);
void kmp(char* txt,char* ptn)
{
	int m=strlen(txt);
	int n=strlen(ptn);
	int lp[n];
	lps(ptn,n,lp);
	int i=0,j=0;
	while(i<m)
	{
		if(ptn[j]==txt[i])
		{
			i++;
			j++;
		}
		if(j==n)
		{
			cout<<"pattern found"<<i-j<<"n";
			j=lp[j-1];
		}
		else if(i<m && ptn[j]!=txt[i])
		{
			if(j!=0)
			{
				j=lp[j-1];
			}
			else
			{
				i++;
			}
		}
	}
	
}
void lps(char*ptn,int n,int* lp)
{
	int l=0;
	lp[0]=0;
	int i=1;
	while(i<n)
	{
		if(ptn[l]==ptn[i])
		{
			l++;
			lp[i]==l;
			i++;
		}
		else
		{
			if(l!=0)
			{
				l=lp[l-1];
			}
			else
			{
				lp[i]=0;
				i++;
			}
		}
	}
}
main()
{
char txt[]="ababababbaa";
char ptn[]="abba";
kmp(txt,ptn);
}
