#include <iostream>
#include <cstring> // For handling character arrays
using namespace std;

int main() {
    char binary1[32], binary2[32], result[33];
    int i, j, k, carry = 0, sum;

    cout << "Enter the first binary number: ";
    cin >> binary1;
    cout << "Enter the second binary number: ";
    cin >> binary2;

    i = strlen(binary1) - 1; // Index of last character in binary1
    j = strlen(binary2) - 1; // Index of last character in binary2
    k = 0;                   // Index for result


// --------------------------------- Write the loop to add the binary numbers --------------------------------------------------------------
    while (i >= 0 || j >= 0 || carry > 0) {
        sum = carry; // Start with any carry from the previous addition

        // Add your code here to add the current digit from binary1 if available
        // Add your code here to add the current digit from binary2 if available

        // Add your code here to store the result of current addition to the result array
        // Update the carry value

        // Increment the result array index
    }

    result[k] = '\0'; // Null-terminate the result

    cout << "Sum: ";
// --------------------------------- End --------------------------------------------------------------


// --------------------------------- Write the code to print the result array in reverse order --------------------------------------------------------------
    
    for (int m = k - 1; m >= 0; m--) {
        // Add your code here to print each digit of the result
    }
    cout << endl;

// --------------------------------- End --------------------------------------------------------------
    return 0;
}