#include<iostream>
using namespace std;
class fact
{
    public:int i,f=1;
    int fa(int n)
    {
        for(i=n;i>0;i--)
        {
            f=f*i;
        }
        return f;
    }
};
int main()
{
    int n;
    fact o;
    cin>>n;
    cout<<" "<<o.fa(n);
    return 0;
}
