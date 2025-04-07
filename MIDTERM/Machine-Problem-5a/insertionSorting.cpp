#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    int comparisons = 0, swaps = 0;
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            comparisons++;
            arr[j + 1] = arr[j];
            swaps++;
            j--;
        }
        arr[j + 1] = key;
        if (j >= 0) comparisons++;
    }
    cout << "Insertion Sort: " << comparisons << " comparisons, " << swaps << " swaps\n";
}

int main() {
    const int n = 5;
    int arr[n];

    cout << "Enter exactly 5 elements:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "\nOriginal array:\n";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    insertionSort(arr, n);

    cout << "\nSorted array:\n";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}
