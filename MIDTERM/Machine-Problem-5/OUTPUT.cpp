#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int linearCtr = 0, jumpCtr = 0, interpCtr = 0, binaryCtr = 0;

void printInitialArray(const vector<int>& arr) {
    cout << "Initial array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

void printResult(int index, const string& searchType, int comparisons) {
    if (index != -1) {
        cout << searchType << " found the element at index: " << index << endl;
    } else {
        cout << searchType << " could not find the element in the array." << endl;
    }
    cout << comparisons << " comparisons made.\n" << endl;
}

// Linear Search
int linearSearch(const vector<int>& arr, int target) {
    linearCtr = 0;
    for (int i = 0; i < arr.size(); i++) {
        linearCtr++;
        if (arr[i] == target) return i;
    }
    return -1;
}

// Jump Search
int jumpSearch(const vector<int>& arr, int target) {
    jumpCtr = 0;
    int n = arr.size();
    int step = sqrt(n);
    int prev = 0;

    while (arr[min(step, n) - 1] < target) {
        jumpCtr++;
        prev = step;
        step += sqrt(n);
        if (prev >= n) return -1;
    }

    for (int i = prev; i < min(step, n); i++) {
        jumpCtr++;
        if (arr[i] == target) return i;
    }
    return -1;
}

// Interpolation Search
int interpolationSearch(const vector<int>& arr, int target) {
    interpCtr = 0;
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high && target >= arr[low] && target <= arr[high]) {
        interpCtr++;
        if (low == high) {
            if (arr[low] == target) return low;
            return -1;
        }

        int pos = low + ((double)(high - low) / (arr[high] - arr[low]) * (target - arr[low]));

        if (arr[pos] == target) return pos;
        if (arr[pos] < target) low = pos + 1;
        else high = pos - 1;
    }
    return -1;
}

// Binary Search
int binarySearch(const vector<int>& arr, int target) {
    binaryCtr = 0;
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        binaryCtr++;
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) return mid;
        if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main() {
    vector<int> arr = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int target = 15;

    printInitialArray(arr);
    cout << "Target data: " << target << "\n" << endl;

    // Linear Search
    int result = linearSearch(arr, target);
    printResult(result, "Linear Search", linearCtr);

    // Jump Search (Requires sorted array)
    result = jumpSearch(arr, target);
    printResult(result, "Jump Search", jumpCtr);

    // Interpolation Search (Requires sorted array)
    result = interpolationSearch(arr, target);
    printResult(result, "Interpolation Search", interpCtr);

    // Binary Search (Requires sorted array)
    result = binarySearch(arr, target);
    printResult(result, "Binary Search", binaryCtr);

    return 0;
}
