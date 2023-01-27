#include<iostream>
using namespace std;
main()
{
	int a;
	cout<<"Enter the age of person:";
	cin>>a;
	if(a>=18)
	cout<<"\nperson is eligible for voting";
	if(a<18)
	cout<<(18-a)<<"years left for voting";
}