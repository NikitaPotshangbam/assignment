// Write a program to count digits in a given number 
#include <iostream> 
using namespace std;

int main() {
    int number; 
    int count = 0; 
    cout << "Enter an integer: "; 
    cin >> number; 
	 if (number == 0) {
        count = 1; 
    } else {
        
        if (number < 0) {
            number = -number;
        }
        
        while (number > 0) {
            number /= 10; 
            count++; 
        }
    }

    cout << "Number of digits: " << count << std::endl; 
    return 0; 
}
