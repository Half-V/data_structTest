#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    int comparisons = 0, swaps = 0;
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            comparisons++;
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        if (minIdx != i) {
            swap(arr[i], arr[minIdx]);
            swaps++;
        }
    }
    cout << "Selection Sort: " << comparisons << " comparisons, " << swaps << " swaps\n";
}

int main() {
    const int n = 5;
    int arr[n];

    cout << "Enter exactly 5 elements:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "\nOriginal array:\n";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    selectionSort(arr, n);

    cout << "\nSorted array:\n";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}
