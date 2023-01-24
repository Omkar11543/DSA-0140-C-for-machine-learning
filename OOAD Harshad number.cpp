#include<iostream>
using namespace std;
main()
{
	int n,sum=0,r,temp;
	cout<<"enter a number";
	cin>>n;
	temp=n;
	while(n!=0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	if((temp%sum)==0)
	   cout<<"Its a harshadh number";
	else
	   cout<<"Not an harshadh number";
}