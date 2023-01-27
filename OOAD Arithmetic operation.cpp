#include<iostream>
using namespace std;
main()
{
	int a,b,o;
	float d;
	cout<<"Caluclator\n\n1-add\n2-subract\n3-multiplication\n4-division\n5-modulus";
	cout<<"\nEnter the operation";
	cin>>o;
	cout<<"Enter the first number:";
	cin>>a;
	cout<<"Enter the second number:";
	cin>>b;
	switch(o)
	{
		case 1:
		cout<<a<<"+"<<b<<"="<<(a+b);
		break;
		case 2:
		cout<<a<<"-"<<b<<"="<<(a-b);
		break;
		case 3:
		cout<<a<<"*"<<b<<"="<<(a*b);
		break;
		case 4:
		d=(float)a/(float)b;
		cout<<a<<"/"<<b<<"="<<d;
		break;
		case 5:
		cout<<a<<"%"<<b<<"="<<(a%b);
		break;
		cout<<"Entered operation is invalid";
	}
}
