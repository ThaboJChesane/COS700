#include <iostream>
using namespace std;

// ---------------------------------Write the function to check if an array is a valid mountain array--------------------------------------------------------------
bool validMountainArray(int arr[], int size) {
    // TODO: Check if the array length is less than 3
    // Return false if it is

    // TODO: Find the peak of the mountain
    int i = 0;
    // Climb up to the peak
   while (i + 1 < size && arr[i] < arr[i + 1]) {
        i++;
    }

    // TODO: Check if the peak is not the first or last element
  if (i == 0 || i == size - 1) return false;
    // TODO: Climb down from the peak
      while (i + 1 < size && arr[i] > arr[i + 1]) {
        i++;
    }

    // TODO: Return true if we reached the end of the array, otherwise return false
     return i == size - 1;
}

// --------------------------------- End --------------------------------------------------------------

int main() {
    int arr1[] = {2, 1};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    cout << "Is valid mountain array? " << (validMountainArray(arr1, size1) ? "True" : "False") << endl; // Expected output: False

    int arr2[] = {3, 5, 5};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    cout << "Is valid mountain array? " << (validMountainArray(arr2, size2) ? "True" : "False") << endl; // Expected output: False

    int arr3[] = {0, 3, 2, 1};
    int size3 = sizeof(arr3) / sizeof(arr3[0]);
    cout << "Is valid mountain array? " << (validMountainArray(arr3, size3) ? "True" : "False") << endl; // Expected output: True

    return 0;
}