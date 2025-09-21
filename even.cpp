//Write a program to calculate sum of first N even natural numbers
#include<iostream>
using namespace std;
int main() {
	int n,sum;
	cout<<"Enter the value of n:"<<endl;
	cin >>n;
	for(int i=2;i<=n;i++){
		sum+=i*2;
	}
	cout<<"Sum of first "<<n<<" even natural no:"<<sum<<endl;
	return 0;
}
