#include <iostream>

using namespace std;
int ctr = 0;                                    // Global variable to count comparisons

void printInitial(int arr[], int size) {
    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

void printResult(int index) {
    if (index != -1) {
        cout << "\nElement found at index: " << index << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    cout << ctr << " comparisons made.\n" << endl;                      // Print the number of comparisons
}

int linearSearch(int arr[], int size, int target) {

    for (int i = 0; i < size; i++) {
        ctr++;                                                          // Increment the counter
        if (arr[i] == target) {
            return i;
        }
       
    }
    return -1;
}

int main() {
    int arr[10] = {34, 7, 23, 32, 5, 62, 32, 2, 45, 67};
    int size = 10;
    int target = 2;

    printInitial(arr, size);
    int result = linearSearch(arr, size, target);
    printResult(result);

    return 0;
}