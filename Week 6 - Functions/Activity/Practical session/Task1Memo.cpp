#include <iostream>
using namespace std;


int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}


int findMin(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

double findAverage(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (double)sum / size;
}

int main() {
    int size;
    
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];


    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }


    cout << "Maximum value: " << findMax(arr, size) << endl;
    cout << "Minimum value: " << findMin(arr, size) << endl;
    cout << "Average value: " << findAverage(arr, size) << endl;

    return 0;
}
