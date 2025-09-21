//Write a program to calculate sum of cubes of first N natural numbers 
#include<iostream>
using namespace std;
int main(){
	int n,sum;
	cout<<"Enter the value of n:"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++){
		sum+=i*i*i;
	}
	cout<<"Sum of cubes of first "<<n<< "natural no is : "<<sum<<endl;
	return 0;
}
