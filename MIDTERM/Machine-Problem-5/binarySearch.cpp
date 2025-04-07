#include <iostream>
#include <vector>

using namespace std;
int ctr = 0;                                    // Global variable to count comparisons


void printInitialArray(const vector<int>& arr) {
    cout << "Initial array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

void printResult(int index) {
    if (index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }
    cout << ctr << " comparisons made.\n" << endl;                      // Print the number of comparisons
}

int binarySearch(const vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        ctr++;                                                          // Increment the counter
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    vector<int> arr = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int target = 1;

    printInitialArray(arr);
    int result = binarySearch(arr, target);
    printResult(result);

    return 0;
}