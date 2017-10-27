#include<iostream>
int main()
{
int m,n,s,k,q,r,u,v;
std::cin>>m;
std::cin>>n;
std::cin>>s;
std::cin>>k;
q=s/m+1;
r=s%m;
if(s%m==0)
{
    q=s/m;
    r=m;
}
u=k/n+1;
v=k%n;
if(k%m==0)
{
    u=k/n;
    v=n;
}
std::cout<<"\n"<<q<<r<<u<<v;
return 0;
}
