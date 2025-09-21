//wap that reads two integers from the user and determines if the first integer is divisible by the second integer. 
#include<iostream>
using namespace std;
int main(){
	int x,y;
	cout<<"Enter the first integer:"<<endl;
	cin>>x;
	cout<<"Enter the second integer:"<<endl;
	cin>>y;
	if (x/y==0)
	{
		cout<<"First integer is not divisible by second integer"<<endl;
	}
	else
	{
		cout<<"First integer is divisible by second integer"<<endl;
    }
	return 0;
}
