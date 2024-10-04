#include <iostream>
using namespace std;

int main() {
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;

    if (decimal == 0) {
        cout << "Binary: 0" << endl;
        return 0;
    }

    int binary[32]; // Array to store binary digits
    int index = 0;

 // ---------------------------------Write the loop to convert decimal to binary  --------------------------------------------------------------
    while (decimal > 0) {
        // Add your code here to store the remainder of decimal divided by 2
        // Update the decimal number by dividing it by 2
        // Increment the index for the next position in the array
    }
 // --------------------------------- End --------------------------------------------------------------

    cout << "Binary: ";
 // ---------------------------------Write the code to print the binary array in reverse order--------------------------------------------------------------
    for (int i = index - 1; i >= 0; i--) {
        // Add your code here to print each binary digit
    }
    cout << endl;
// --------------------------------- End --------------------------------------------------------------
    return 0;
}