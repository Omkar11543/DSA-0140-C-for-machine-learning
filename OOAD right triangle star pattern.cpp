#include<iostream>
using namespace std;
main()
{
	int i,k,j,n,m=1;
	cout<<"Enter the number of rows";
	cin>>n;
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i-1;j++)
		{
			cout<<" ";
		}
		for(k=1;k<=m;k++)
		{
			cout<<"*";
		}
		cout<<"\n";
		m++;
	}
}