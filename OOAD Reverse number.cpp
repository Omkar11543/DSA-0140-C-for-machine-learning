#include<iostream>
using namespace std;
main()
{
	int n,rev=0,digit,num;
	cout<<"Enter the value to be reversed:";
	cin>>num;
	n=num;
	while(n>0)
	{
		digit=n%10;
		rev=(rev*10)+digit;
		n=n/10;
	}
	cout<<"The reverse number is:"<<rev<<endl;
}