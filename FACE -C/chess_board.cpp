#include<iostream>
using namespace std;
int main()
{
	int n,c,d,t,t1,j,i;
	cin>>n;
	c=n/2;
	t=c;
	d=c+1;
	t1=d;
   for(i=1;i<=n;i++)
	{
		t=c;
		t1=d;
		if(i%2==0)
		{
			while(t!=0)
			{
				cout<<"%";
				t--;
			}
			cout<<"\n";
		}
		else
		{
				while(t1!=0)
			{
				cout<<"%";
				t1--;
			}
			cout<<"\n";
		}
	}
}
