#include <iostream>
using namespace std;

void merge(int arr[], int left, int mid, int right, int &comparisons) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int L[n1], R[n2];

    for (int i = 0; i < n1; i++) L[i] = arr[left + i];
    for (int i = 0; i < n2; i++) R[i] = arr[mid + 1 + i];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        comparisons++;
        if (L[i] <= R[j]) arr[k++] = L[i++];
        else arr[k++] = R[j++];
    }

    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
}

void mergeSort(int arr[], int left, int right, int &comparisons) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid, comparisons);
        mergeSort(arr, mid + 1, right, comparisons);
        merge(arr, left, mid, right, comparisons);
    }
}

int main() {
    const int n = 5;
    int arr[n];

    cout << "Enter exactly 5 elements:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "\nOriginal array:\n";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    int comparisons = 0;
    mergeSort(arr, 0, n - 1, comparisons);

    cout << "Merge Sort: " << comparisons << " comparisons (no swaps counted)\n";

    cout << "\nSorted array:\n";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}
