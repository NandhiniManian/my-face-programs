#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class seg
{
	public:int i;
	public:
		void st(int a[],int n)
		{
			sort(a,a+n);
			for(i=0;i<n;i++)
			{
				cout<<" "<<a[i];
			}
		}
		
};
int main()
{
	int i,a[100],n;
	seg o;
	cin>>n;
	for(i=0;i<n;i++)
			{
				cin>>a[i];
			}
	o.st(a,n);
}
