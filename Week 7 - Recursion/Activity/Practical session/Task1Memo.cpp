#include <iostream>
using namespace std;

int sumOfDigits(int n) {
    if (n == 0)
        return 0; 
    return (n % 10) + sumOfDigits(n / 10);  
}

int main() {
    int n = 246824;  
    int result = sumOfDigits(n);
    cout << "Sum of digits: " << result << endl;
    return 0;
}