#include<iostream>
using namespace std;
class a 
{
int x=0,m[100],i;
float per;
public:
void getp1();

	friend void company();	
}a1;
void a::getp1()
{
	cout<<"\n enter the marks of the subjects";
	for(i=1;i<=5;i++)
	{
		cout<<"\n sub"<<i<<":";
		cin>>m[i];
	}
	for(i=1;i<=5;i++)
	{
		x=x+m[i];
	}
	per=(x/500)*100;
	cout<<"\n percentage:"<<per;
	}
class b
{
	int x=0,m[100],i,per;
public:
void getp2();

	friend void company();
}b1;
void b::getp2()
{
	cout<<"\n enter the marks of the subjects";
	for(i=1;i<=5;i++)
	{
		cout<<"\n sub"<<i<<":";
		cin>>m[i];
	}
	for(i=1;i<=5;i++)
	{
		x=x+m[i];
	}
	per=(x/500)*100;
	cout<<"\n percentage:"<<x;
	}
class c
{
int x=0,m[100],i,per;
public:
void getp3();

	friend void company();
}c1;
void c::getp3()
{
	cout<<"\n enter the marks of the subjects";
	for(i=1;i<=5;i++)
	{
		cout<<"\n sub"<<i<<":";
		cin>>m[i];
	}
	for(i=1;i<=5;i++)
	{
		x=x+m[i];
	}
	per=(x/500)*100;
	cout<<"\n percentage:"<<per;
	}
void company()
{
	if(a1.x>b1.x&&a1.x>c1.x)
	{
		cout<<"\n pass "<<a1.x;
	}
		if(b1.x>a1.x&&b1.x>c1.x)
	{
		cout<<"\n pass "<<b1.x;
	}
		if(c1.x>a1.x&&c1.x>b1.x)
	{
		cout<<"\n pass"<<c1.x;
	}
}
main()
{
a1.getp1();
b1.getp2();
c1.getp3();
company();	
}
