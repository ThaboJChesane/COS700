#include <iostream>
#include <cstring> // For handling character arrays (C-style strings)
using namespace std;

int main() {
    char binary1[32], binary2[32], result[33]; // Arrays to store input binaries and the result
    int i, j, k, carry = 0, sum; // Variables for indexes, carry, and sum

    cout << "Enter the first binary number: ";
    cin >> binary1; // Read the first binary number from the user
    cout << "Enter the second binary number: ";
    cin >> binary2; // Read the second binary number from the user

    i = strlen(binary1) - 1; // Initialize i to the index of the last character in binary1
    j = strlen(binary2) - 1; // Initialize j to the index of the last character in binary2
    k = 0;                   // Initialize k to 0 for storing results


// --------------------------------- Write the loop to add the binary numbers --------------------------------------------------------------


    while (i >= 0 || j >= 0 || carry > 0) {
        sum = carry; // Start with any carry from the previous addition

        // Add your code here to add the current digit from binary1 if available
        if (i >= 0) {
            sum += binary1[i] - '0'; // Convert character to integer and add to sum
            i--; // Move to the next digit
        }

        // Add your code here to add the current digit from binary2 if available
        if (j >= 0) {
            sum += binary2[j] - '0'; // Convert character to integer and add to sum
            j--; // Move to the next digit
        }

        // Add your code here to store the result of current addition to the result array
        result[k] = (sum % 2) + '0'; // Store the current bit as a character

        // Update the carry value
        carry = sum / 2;

        // Increment the result array index
        k++;
    }

    result[k] = '\0'; // Null-terminate the result

// --------------------------------- End --------------------------------------------------------------

    cout << "Sum: ";

// ---------------------------------Write the code to print the result array in reverse order--------------------------------------------------------------

    for (int m = k - 1; m >= 0; m--) {
        // Add your code here to print each digit of the result
        cout << result[m]; // Print result digits in reverse order
    }
    cout << endl;

    return 0;
// --------------------------------- End --------------------------------------------------------------

}