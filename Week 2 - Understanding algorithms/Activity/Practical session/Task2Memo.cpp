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

  // --------------------------------- Implement the selection sort algorithm  --------------------------------------------------------------
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i; // Assume the current element is the minimum

        // Inner loop to find the minimum element
        for (int j = i + 1; j < n; j++) {
            // Add your code here to find the index of the minimum element
            if (arr[j] < arr[minIndex]) {
                minIndex = j; // Update minIndex if a smaller element is found
            }
        }

        // Add your code here to swap the found minimum element with the first element
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
// --------------------------------- End --------------------------------------------------------------


    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; // Print the sorted array
    }
    cout << endl;

    return 0;
}