#include<iostream>
using namespace std;
int main(){
	int p,r,t;
	float si;
	cout<<"Enter the principle"<<endl;
	cin>>p;
	cout<<"Enter the rate:"<<endl;
	cin>>r;
	cout<<"Enter the time:"<<endl;
	cin>>t;
	si=(p*r*t)/100;
	cout<<"Simple Interest is:"<<si<<endl;
	return 0;
}
