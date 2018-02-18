#include <iostream>
using namespace std;
class ThreeNumbers
{
int c,a,b;
public:
void get()
{
cout<<"INPUT"<<endl;
	cin>>a>>b>>c;
	}
void chck()
{
	cout<<"OUTPUT"<<endl;
if(a>b)
	{
	if(a>c){cout<<a<<endl;}
	else{cout<<c<<endl;}
	}
	else
	{
	    if(b>c){cout<<b<<endl;}
	else{cout<<c<<endl;}
	}
}
};
int main()
{
ThreeNumbers t;
t.get();
t.chck();
return 0;
}