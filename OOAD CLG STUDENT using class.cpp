#include<iostream>
using namespace std;

class sample{
	public: int m1,m2;
	     int student(int regno){
	     	string name,dept;
	     	cout<<"enter the reg no:";
	     	cin>>regno;
	     	cout<<"enter the name";
	     	cin>>name;
	     	cout<<"enter the department";
	     	cin>>dept;
	     	cout<<"enter the 1st marks:";
	     	cin>>m1;
	     	cout<<"enter the 2nd marks:";
	     	cin>>m2;
		};
		 int average(int avg){
		 	avg=(m1+m2)/2;
		 	cout<<"average:"<<avg;
		 }
};
int main(){
	sample sam;
	int reg,ave;
	sam.student(reg);
	sam.average(ave);
}