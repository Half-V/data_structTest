#include <iostream>
#include <cmath>
#include <vector>

using namespace std;
int Jumpctr = 0;                                    // Global variable to count comparisons
int Linearctr = 0;

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

    cout << Jumpctr << " comparisons made for jump search." << endl;                      // Print the number of comparisons
    cout << Linearctr << " comparisons made for linear search." << endl;                      // Print the number of comparisons
    cout << Jumpctr + Linearctr << " total comparisons made." << endl;                      // Print the number of comparisons
}   

// Function to perform Jump Search on a sorted array
int jumpSearch(const vector<int>& arr, int x) {
    int n = arr.size();
    // Finding block size to be jumped
    int step = sqrt(n);
    int prev = 0;

    // Finding the block where element is present (if it is present)
    while (arr[min(step, n) - 1] < x) {
        Jumpctr++;                                                                  // Increment the counter for jump search
        prev = step;
        step += sqrt(n);
        if (prev >= n) {
            return -1; // If we reached the end of the array
        }
    }

    // Doing a linear search for x in the block beginning with prev
    for (int i = prev; i < min(step, n); i++) {
        Linearctr++;                                                                // Increment the counter for linear search
        if (arr[i] == x) {
            return i; // If element is found
        }
    }

    return -1; // If element is not found
}

int main() {
    vector<int> arr = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int x = 4;

    printInitialArray(arr);
    int result = jumpSearch(arr, x);
    printResult(result);

    return 0;
}