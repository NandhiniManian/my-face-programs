#include<iostream>
using namespace std;
int main()
{
	int a,a1,a2,b,b1,b2,t,t1,t2,s,s1=0,s2=0;
	cin>>a>>a1>>a2;
	cout<<"\n";
	cin>>b>>b1>>b2;
	t2=a2+b2;
	t1=a1+b1;
		t=a+b;
	if(t2>60)
	{
		t2=t2-60;
		t1=t1+1;
	}
	else if(t2==60)
	{
		t2=1;
	}
	else
	{	
	}
	
	if(t1>60)
	{
		t1=t1-60;
		t=t+1;
	}
	else if(t1==60)
	{
		t1=1;
	}
	else
	{	
	}

	cout<<t<<" "<<":"<<t1<<" "<<":"<<t2<<" ";
	
}
