//Write a program to calculate sum of squares of first N natural numbers
#include<iostream>
using namespace std;
int main(){
	int n,sum;
	cout<<"Enter the value of n:"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++){
		sum+=i*i;
	}
	cout<<"Sum of squares of first "<<n<<" natural no"<<sum<<endl;
	return 0;
}
