#include <iostream>
using namespace std;

// ---------------------------------Write the code function to sort an array using Merge Sort--------------------------------------------------------------

void merge(int arr[], int left, int mid, int right) {
  
    int n1 = mid - left + 1; 
    int n2 = right - mid;    
    int* leftArray = new int[n1];
    int* rightArray = new int[n2];

    // TODO: Copy data to temporary arrays for leftArray[] and rightArray[]
    for (int i = 0; i < n1; i++)
        leftArray[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        rightArray[j] = arr[mid + 1 + j];


    int i = 0;    // Initial index for left array
    int j = 0;    // Initial index for right array
    int k = left; // Initial index for merged array

// TODO: Merge the temporary arrays back into arr[]
    while (i < n1 && j < n2) {
        if (leftArray[i] <= rightArray[j]) {
            arr[k] = leftArray[i];
            i++;
        } else {
            arr[k] = rightArray[j];
            j++;
        }
        k++;
    }

  // TODO: Copy any remaining elements of leftArray[], if any
    while (i < n1) {
        arr[k] = leftArray[i];
        i++;
        k++;
    }

    // TODO: Copy any remaining elements of rightArray[], if any
    while (j < n2) {
        arr[k] = rightArray[j];
        j++;
        k++;
    }


    delete[] leftArray;
    delete[] rightArray;
}

void mergeSort(int arr[], int left, int right) {
    
    if (left < right) {
        int mid = left + (right - left) / 2; //TODO: assign the variable mid to find the middile

      
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

// --------------------------------- End --------------------------------------------------------------

int main() {

    int numbers[] = {64, 25, 12, 22, 11};
    int size = sizeof(numbers) / sizeof(numbers[0]);


    mergeSort(numbers, 0, size - 1);
    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}