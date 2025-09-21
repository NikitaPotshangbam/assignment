//Write a program to calculate factorial of a number
#include<iostream>
using namespace std;
int main(){
	int n,fact=1;
	cout<<"Enter the no:"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++){
		fact*=i;
	}
	cout<<"Factorial of "<<n<<" is :"<<fact<<endl;
	return 0;
}
