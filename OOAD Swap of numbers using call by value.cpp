#include<iostream>
using namespace std;
main()
{
	int a,b;
	cout<<"Enter the value of A";
	cin>>a;
	cout<<"Enter the value of B";
	cin>>b;
	cout<<"\nBefore Swapping Value of::\n\tA="<<a<<"\tB="<<b<<"\n";
	swap(a,b);
	cout<<"\nOutside Function After Swapping,\nValue of::\n\tA="<<a<<"\tB="<<b<<"\n";
}
void swap(int a,int b)
{
	int c;
	c=a;
	a=b;
	b=c;
	cout<<"\n Inside Function After Swapping,Value of::\n\tA="<<a<<"\tB="<<b<<"\n";
}
