#include <iostream>
using namespace std;

int main() {
    int decimal; // Variable to store the input decimal number
    cout << "Enter a decimal number: ";
    cin >> decimal; // Read the decimal number from the user

    if (decimal == 0) {
        // Edge case: if the number is 0, its binary is also 0
        cout << "Binary: 0" << endl;
        return 0; // Exit the program
    }

    int binary[32]; // Array to store binary digits 
    int index = 0;  // Index to keep track of position in the binary array

 // ---------------------------------Write the loop to convert decimal to binary  --------------------------------------------------------------
    while (decimal > 0) {
        // Add your code here to store the remainder of decimal divided by 2
        binary[index] = decimal % 2; // Store remainder (0 or 1)
        
        // Update the decimal number by dividing it by 2
        decimal = decimal / 2;

        // Increment the index for the next position in the array
        index++;
    }
 // --------------------------------- End --------------------------------------------------------------
    cout << "Binary: ";
 // ---------------------------------Write the code to print the binary array in reverse order--------------------------------------------------------------
    for (int i = index - 1; i >= 0; i--) {
        // Add your code here to print each binary digit
        cout << binary[i]; // Print binary digits in reverse order
    }
// --------------------------------- End --------------------------------------------------------------
    cout << endl;

    return 0;
}