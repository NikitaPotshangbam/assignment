//Write a program to calculate sum of first N odd natural numbers 
#include<iostream>
using namespace std;
int main(){
	int n,sum;
	cout<<"Enter the value of n:"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++){
		sum+=i*2;
	}
	cout<<"Sum of first "<<n<< "odd natural no:"<<sum<<endl;
	return 0;
}
