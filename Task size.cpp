#include<iostream>
using namespace std;
int main()
{
	cout<<" Size of char:"<<sizeof(char) <<" byte\n";
	cout<<" Size of int:"<<sizeof(int) <<" bytes\n";
	cout<<" Size of float:"<<sizeof(float) <<" bytes\n";
	cout<<" Size of double:"<<sizeof(double) <<" bytes\n";

     cout<<"\n\n";


	float a,b,mult;
	cout<<"Enter Two number:";
	cin>>a;
	cin>>b;
	mult=a*b;
	cout<<"Product ="<<mult;
	return 0;
}

