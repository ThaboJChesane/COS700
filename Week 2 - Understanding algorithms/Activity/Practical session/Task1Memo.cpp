#include <iostream>
using namespace std;

int main() {
    int n; // Variable to store the number of items
    cout << "Enter the number of items: ";
    cin >> n; // Read the number of items to sort

    int arr[n]; // Array to store the items
    cout << "Enter the items: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Read the items into the array
    }
// ---------------------------------Implement the bubble sort algorithm  --------------------------------------------------------------
   
    for (int i = 0; i < n - 1; i++) {
        // Inner loop for comparing adjacent items
        for (int j = 0; j < n - i - 1; j++) {

            // Add your code here to compare and swap items if needed
            if (arr[j] > arr[j + 1]) { 

                // Swap if the element is greater than the next element
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    // ---------------------------------End --------------------------------------------------------------
   

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; // Print the sorted array
    }
    cout << endl;

    return 0;
}