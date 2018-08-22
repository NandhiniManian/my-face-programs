#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class s
{
	public:int i,a[100];
		void sor(int a[],int n)
		{
			sort(a,a+n);
			cout<<"ascending order:";
			for(i=0;i<n;i++)
			{
			cout<<" "<<a[i];
		    }
		    cout<<"\n";
		    cout<<"descending order:";
			sort(a,a+n,greater<int>());
			 for(i=0;i<n;i++)
		    {
			cout<<" "<<a[i];
		    }
			
		}
};
int main()
{
	int n,a[100],i;
	s o;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	o.sor(a,n);
}
