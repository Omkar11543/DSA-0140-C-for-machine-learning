#include<iostream>
using namespace std;
main()
{
	int num,originalnumber,remainder,result=0;
	cout<<"Enter the three digit number";
	cin>>num;
	originalnumber=num;
	while(originalnumber!=0)
	{
		remainder=originalnumber%10;
		result+=remainder*remainder*remainder*remainder;
		originalnumber/=10;
	}
	if(result==num)
	   cout<<num<<"is an Armstrong number";
	else
	   cout<<num<<"is not a Armstrong number";
	return 0;
}