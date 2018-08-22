#include<iostream>
using namespace std;
class s
{
    public:int a,b;
    public:
    void swa(int a,int b)
    {
      a=a+b;
	  b=a-b;
	  a=a-b;    
    
        cout<<a<<"\n"<<b;
    }
};
int main()
{
    int a,b;
    s o;
    cin>>a>>b;
    o.swa(a,b);
    return 0;
}
