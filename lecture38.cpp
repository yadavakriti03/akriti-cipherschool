#include <iostream>
using namespace std;

int main() {
    int arr[10];

    // Taking input for the array
    cout << "Enter 10 integers: " << endl;
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    int index = 0;

    // Implementing selection sort algorithm
    for (int i = 0; i < 10 - 1; i++) {    
        index = i;

        // Finding the index of the smallest element in the remaining unsorted portion of the array
        for (int j = i; j < 10; j++) {
            if (arr[j] < arr[index]) {
                index = j;
            }
        }

        // Swapping the found smallest element with the element at position 'i'
        int temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;
    }

    // Displaying the sorted array
    cout << "Sorted array: " << endl;
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
