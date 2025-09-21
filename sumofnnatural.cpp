//Write a program to calculate sum of first N natural numbers 
#include<iostream>
using namespace std;
int main(){
	int n,sum;
	cout<<"Enter the value of n:"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++){
		sum=sum+i;
	}
	cout<<"Sum of first "<<n<<" natural no is:"<<sum<<endl;
	return 0;
}
